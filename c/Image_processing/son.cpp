#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#pragma pack(1)
typedef unsigned char BYTE;//1 bytes of memory
typedef unsigned short WORD;//2 bytes of memory
typedef unsigned int DWORD;//4 bytes of memory
typedef int LONG;//4 bytes of memory
typedef struct _BMPFH//takes 14 bytes of memory
{
	BYTE bftype1;//1 byte and must be 'B'
	BYTE bftype2;//1 byte and must be 'M'
	DWORD bfsize;//4 bytes gives us the all size of bmp file (including headers,palette (if it has) data)
	WORD bfreserved1;// 2 btyes of memory could be set as 0
	WORD bfreserved2;// 2 btyes of memory could be set as 0
	DWORD bfOffbits;//4 bytes of memeory gives the position of data starts in the bmp file
} BMPFH;
typedef struct _BMPIH//40 bytes for windows bitmap file
{
	DWORD bisize;//4 bytes and it gives the size of info header
	LONG  biw;//4 bytes and it is the width of image
	LONG bih;//4 bytes and it is the height of iimage
	WORD biplane;//2 bytes which is not important for us
	WORD bibitcount;//2 bytes it is about the type of bitmap file if it is 1 2 color, 4 (16 colors) ..
	DWORD biComp;//4 bytes not important
	DWORD bisizeimage;//4 bytes and it gives the size of data in the image 
	LONG bix;//4 bytes not importatnt
	LONG biy;//4 bytes not important
	DWORD biclused;//4 bytes not important
 	DWORD biclimp;//4 byets not importatnt for us
}  BMPIH;
typedef struct _PALET//in palette it describes colors (what is the color number)
{
	BYTE rgbblue;//blue commponent
	BYTE rgbgreen;//green component
	BYTE rgbred;//red component
	BYTE rgbreserved;//reserved byte the user can use this for therir aims
} PALET;
typedef struct _IMAGE
{
	BMPFH   bmpfh;
	BMPIH   bmpih;
	PALET   *palet;
	BYTE    *data;
}  IMAGE;

IMAGE *imageRead(IMAGE *image,char *filename){
    FILE *fp;
    fp = fopen(filename,"rb");
    if(fp==NULL)exit(1);
    DWORD r,rowsize,size,h,w;
    BMPFH bmpfh;
    BMPIH bmpih;
    fread(&bmpfh,sizeof(BMPFH),1,fp);
    if(bmpfh.bftype1 != 'B' || bmpfh.bftype2 != 'M')exit(1);
    fread(&bmpih,sizeof(BMPIH),1,fp);
    image = (IMAGE*)malloc(bmpfh.bfsize);
    image->bmpfh = bmpfh;
    image->bmpih = bmpih;
    r=0;
    if(image->bmpih.bibitcount==1)r=2;
    if(image->bmpih.bibitcount==4)r=16;
    if(image->bmpih.bibitcount==8)r=256;
    if(r!=0){
        image->palet = (PALET*)malloc(4*r);
        fread(image->palet,sizeof(BYTE),4*r,fp);
    }
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*image->bmpih.bih;
    image->data=(BYTE*)malloc(size);
    fread(image->data,size,1,fp);
    fclose(fp);
    return image;
}
void imageWrite(IMAGE *image,char *filename){
    FILE *fp;
    fp = fopen(filename,"wb");
    if(fp==NULL)exit(1);
    DWORD r,rowsize,size,h,w;
    fwrite(&image->bmpfh,sizeof(BMPFH),1,fp);
    fwrite(&image->bmpih,sizeof(BMPIH),1,fp);
    r=0;
    if(image->bmpih.bibitcount==1)r=2;
    if(image->bmpih.bibitcount==4)r=16;
    if(image->bmpih.bibitcount==8)r=256;
    if(r!=0)fwrite(image->palet,4*r,1,fp);
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*image->bmpih.bih;
    fwrite(image->data,size,1,fp);
    fclose(fp);
}
void reverseImage(IMAGE *image){
    int h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*h;
    /*for(int i=0 ; i<256 ; i++){
        image->palet[i].rgbblue = 255 - i;
        image->palet[i].rgbred = 255 - i;
        image->palet[i].rgbgreen = 255 - i;
    }*/
    for(int i=0 ; i<size ; i++){
        image->data[i] = 255 - image->data[i];
    }
}
void histogramEqualization(IMAGE *image){
    int h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*h;
    double hist[256] = {0};
    for(int i=0 ; i<256 ; i++)hist[image->data[i]]++;
    double sum=0;
    for(int i=0 ; i<256 ;i++){
        hist[i] = hist[i]/size;
    }
    for(int i=0 ; i<256 ; i++){
        sum += hist[i];
        hist[i] = (int)(sum*255);
    }
    for(int i=0 ; i<size ; i++)image->data[i] = (BYTE)hist[image->data[i]];
}
BYTE mean(BYTE *data,int h,int rowsize){
    double sum=0;
    int size;
    size = rowsize*h;
    for(int i=0 ; i<size ; i++)sum += data[i];
    sum = sum/size;
    return (BYTE)sum;
}
void threshold(IMAGE *image){
    int h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*h;
    BYTE mean_ = mean(image->data,h,rowsize);
    for(int i=0 ; i<size ; i++){
        if(image->data[i] > mean_)image->data[i]=255;
        else image->data[i]=0;
    }
}
void lowpassfilter(IMAGE *image,double filter[3][3]){
    int h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*h;
    BYTE mask[3][3];
    BYTE *data;
    data = (BYTE*)calloc(size,sizeof(BYTE));
    memcpy(data,image->data,size);
    double sum;
    for(int i=1 ; i<h-1 ; i++){
        for(int j=1 ; j<rowsize-1 ; j++){
            for(int k=-1 ; k<2 ; k++)
                for(int l=-1 ; l<2 ; l++)
                    mask[k+1][l+1] = data[(i+k)*rowsize+j+l];
            sum=0;
            for(int k=0 ; k<3 ; k++)
                for(int l=0 ; l<3 ; l++)
                    sum += mask[k][l] * filter[k][l];
            if(sum > 255)sum=255;
            if(sum < 0)sum=0;
            image->data[i*rowsize+j] = (BYTE)sum;
        }
    }
}
void swap(BYTE *a,BYTE *b){
	int c=*a;
	*a=*b;
	*b=c;
}
BYTE median(BYTE *mask){
    int i,j,index;
	for(i=0;i<49;i++)
	{
		index=i;
		for(j=i+1;j<49;j++)
		    if(mask[j]>mask[index]) index=j;
		if(i!=index) swap(&mask[i],&mask[index]);
	}
	return mask[24];
}
void medianFilter(IMAGE *image){
    int h,w,n,rowsize,size;
    BYTE mask[49];
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    BYTE *data;
    if(data == NULL)exit(1);
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*h;
    data = (BYTE*)calloc(size,sizeof(BYTE));
    memcpy(data,image->data,size);
    for(int i=3 ; i<h-3 ; i++){
        for(int j=3 ; j<rowsize-3 ; j++){
            n=0;
            for(int k=-3 ; k<=3 ; k++)
                for(int l=-3 ; l<=3 ; l++)
                    mask[n++] = data[(i+k)*rowsize+j+l]; 
            image->data[i*rowsize+j] = median(mask);
        }
    }
    free(data);
}
void addNoise(IMAGE *image){
    srand(time(NULL));
    int h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*image->bmpih.biw+31)/32*4;
    size = rowsize*h;
    int nBlack = size / 20;
    int nWhite = size / 20;
    int rnd;
    for(int i=0 ; i<nBlack ; i++)
    {
        rnd = ((RAND_MAX)*rand()+rand())%size;
        image->data[rnd]=0;
    }
    for(int i=0 ; i<nWhite ; i++)
    {
        rnd = ((RAND_MAX)*rand()+rand())%size;
        image->data[rnd]=255;
    }
}
int main(int argc, char const *argv[]){
    IMAGE *image; 
    image = (IMAGE*)malloc(sizeof(IMAGE));
    image = imageRead(image,"biber.bmp");
    double filter[3][3] = { 1./9,1./9,1./9,
                            1./9,1./9,1./9,
                            1./9,1./9,1./9};
    //reverseImage(image);
    //histogramEqualization(image);
    //threshold(image);
    //lowpassfilter(image,filter);
    addNoise(image);
    medianFilter(image);
    imageWrite(image,"son2.bmp");
    return 0;
}
