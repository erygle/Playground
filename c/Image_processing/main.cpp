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
IMAGE *imageRead(IMAGE *image,char *fname);
void imageWrite(IMAGE *image,char *fname);
void setZero(IMAGE *image);
void setDefault(IMAGE *image);
void histogram(IMAGE *image);
void histogram(IMAGE *image,double hist[]);
void histogramEqualization(IMAGE *image);
void reverseImage(IMAGE *image);
void changePalette(IMAGE *image);
void threshold(IMAGE *image,LONG t);
BYTE mean(BYTE *data,LONG h,LONG rowsize);
BYTE maxminmean(BYTE *data,LONG h,long rowsize);
void threshold(IMAGE *image);
void lowpassFilter(IMAGE *image,double filter[3][3]);
void highpassFilter(IMAGE *image,double filter[3][3]);
BYTE median(BYTE *mask);
void medianFilter(IMAGE *image);
void swap(BYTE *a,BYTE *b);
void addNoise(IMAGE *image);
void findMinMax(IMAGE *image,int *min,int *max);
void stretch(IMAGE *image,int MIN,int MAX);
BYTE findMin(IMAGE *image);
BYTE findMax(IMAGE *image);



int main(int argc, char const *argv[]){
    char *fname = "kelebek.bmp";
    IMAGE *image = (IMAGE*)malloc(sizeof(IMAGE));
    image = imageRead(image,fname);
    //double filter[3][3] = {0,1,0,1,-4,1,0,1,0};//laplacian
    //double filter[3][3]={0,1,0,0,-2,0,0,1,0};//yatay
	//double filter[3][3]={0,0,0,1,-2,1,0,0,0};//dikey
	//double filter[3][3]={0,-1,0,-1,5,-1,0,-1,0};//sharpened
	double filter[3][3]={1,1,1,1,-8,1,1,1,1};//variation of laplacian 
	//double filter[3][3]={-1,-2,-1,0,0,0,1,2,1};//sobel 1
	//double filter[3][3]={-1,0,1,-2,0,2,-1,0,1};//sobel 2

    //setZero(image); //set image all pixels to black
    //setDefault(image);
    
    //histogram(image);
    //histogramEqualization(image);
    
    //reverseImage(image);
    //changePalette(image);
    
    threshold(image);
    
    //lowpassFilter(image,filter);
    //highpassFilter(image,filter);
    //addNoise(image);
    //medianFilter(image);
    //stretch(image,50,100);
    imageWrite(image,"main.bmp");
    free(image);
    return 0;   
}

IMAGE *imageRead(IMAGE *image,char *fname){
    FILE *fp;
    fp = fopen(fname,"rb");
    LONG r,rowsize,size;
    BMPFH bmpfh;
    BMPIH bmpih;
    if(fp == NULL)exit(1);
    fread(&bmpfh,sizeof(BMPFH),1,fp);
    if(bmpfh.bftype1 != 'B' ||bmpfh.bftype2 != 'M')exit(1);
    fread(&bmpih,sizeof(BMPIH),1,fp);
    image = (IMAGE*)malloc(bmpfh.bfsize);
    if(image == NULL)exit(1);
    image->bmpfh = bmpfh;
    image->bmpih = bmpih;
    r=0;
    if(image->bmpih.bibitcount == 1)r=2;
    if(image->bmpih.bibitcount == 4)r=16;
    if(image->bmpih.bibitcount == 8)r=256;
    if(r!=0){
        image->palet = (PALET*)malloc(4*r);
        fread(image->palet,sizeof(BYTE),4*r,fp);
    }
    rowsize = (image->bmpih.biw * image->bmpih.bibitcount +31)/32*4;
    size=rowsize * image->bmpih.bih;
    image->data=(BYTE*)malloc(size);
    fread(image->data,size,1,fp);
    fclose(fp);
    return image;
}
void imageWrite(IMAGE *image,char *fname){
    FILE *fp;
    fp = fopen(fname,"wb");
    if(fp == NULL)exit(1);
    LONG r,rowsize,size;
    fwrite(&image->bmpfh,sizeof(BMPFH),1,fp);
    fwrite(&image->bmpih,sizeof(BMPIH),1,fp);
    r=0;
    if(image->bmpih.bibitcount == 1)r=2;
    if(image->bmpih.bibitcount == 4)r=16;
    if(image->bmpih.bibitcount == 8)r=256;
    if(r!=0)fwrite(image->palet,4*r,1,fp);
    rowsize = (image->bmpih.biw * image->bmpih.bibitcount +31)/32*4;
    size=rowsize * image->bmpih.bih;
    fwrite(image->data,size,1,fp);
    fclose(fp);

}

void setZero(IMAGE *image){
    LONG rowsize,size;
    rowsize = (image->bmpih.biw * image->bmpih.bibitcount+31)/32*4;
    size = rowsize * image->bmpih.bih;
    for(int i=0 ; i<size ; i++)image->data[i] = ((image->data[i]*15)+10) % 255;
    for(int i=0 ; i<size ; i++)image->data[i] = 255;
}

void setDefault(IMAGE *image){
    LONG rowsize,size;
    rowsize = (image->bmpih.bibitcount * image->bmpih.biw +31)/32*4;
    size = rowsize * image->bmpih.bih;
    for(int i=0 ; i<size ; i++)image->data[i] = ((image->data[i]-10)/15) % 255;
}

void histogram(IMAGE *image){
    FILE *fp;
    fp = fopen("histogram.txt","w");
    LONG r,rowsize,size;
    LONG hist[256] = {0};
    rowsize = (image->bmpih.biw * image->bmpih.bibitcount+31)/32*4;
    size = rowsize * image->bmpih.bih;
    for(int i=0 ; i<size ; i++)hist[image->data[i]]++;
    for(int i=0 ; i<256 ; i++)fprintf(fp,"%d : %d\n",i,hist[i]);
    fclose(fp);
}
void histogram(IMAGE *image,double hist[]){
    LONG r,rowsize,size;
    rowsize = (image->bmpih.biw * image->bmpih.bibitcount+31)/32*4;
    size = rowsize * image->bmpih.bih;
    
    for(int i=0 ; i<size ; i++)hist[image->data[i]]++;
}
void histogramEqualization(IMAGE *image){
    double hist[256] = {0},t=0;
    LONG h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (w * image->bmpih.bibitcount+31)/32*4;
    size = rowsize * h;

    histogram(image,hist);

    for(int i=0 ; i<256 ; i++){
        hist[i] = hist[i] / (h*rowsize);
    }
    
    for(int i=0 ; i<256 ; i++){
        t += hist[i];
        hist[i] = (int)(t*255);
    }
    for(int i=0 ; i<size ; i++)
        image->data[i] = (BYTE) hist[image->data[i]];

}

void reverseImage(IMAGE *image){
    LONG h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (w * image->bmpih.bibitcount+31)/32*4;
    size = rowsize *h;

    for(int i=0 ; i<size ; i++){
        image->data[i] = 255 - image->data[i];
    }
}
void changePalette(IMAGE *image){
    LONG h,w,rowsize,size;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    for(int i=0 ; i<256 ; i++){
        image->palet[i].rgbblue = 255 - image->palet[i].rgbblue;
        image->palet[i].rgbgreen = 255 - image->palet[i].rgbgreen;
        image->palet[i].rgbred = 255 - image->palet[i].rgbred;
    }
}

BYTE mean(BYTE *data,LONG h,LONG rowsize){
    double sum=0;
    for(int i=0 ; i<h*rowsize ; i++){
        sum+=data[i];
    }
    sum /= (h*rowsize);
    return (BYTE)sum;
}

BYTE maxminmean(BYTE *data,LONG h,long rowsize){
    BYTE max = data[0];
    BYTE min = data[0];
    for(int i=1 ; i<h*rowsize ; i++){
        if(data[i]>max) max = data[i];
        if(data[i]<min) min = data[i];
    }
    double sum = (max+min)/2.;
    return (BYTE)sum;
}
void threshold(IMAGE *image,LONG t){
    LONG w,h,rowsize;
    w=image->bmpih.biw;
    h=image->bmpih.bih;
    rowsize = (w*image->bmpih.bibitcount+31)/32*4;


    for(int i=0 ; i<rowsize*h ; i++){
        if(image->data[i]>t)image->data[i]=255;
        else image->data[i]=0;
    }
}

void threshold(IMAGE *image){
    LONG rowsize,h,w;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (w*image->bmpih.bibitcount+31)/32*4;


    BYTE t = mean(image->data,h,rowsize);
    for(int i=0 ; i<rowsize*h ; i++){
        if(image->data[i]>t)image->data[i]=255;
        else image->data[i]=0;
    }
}
void lowpassFilter(IMAGE *image, double filter[3][3]){
    int rowsize,size,h,w;
    h=image->bmpih.bih;
    w=image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount * w+31)/32*4;
    size = rowsize * h;

    BYTE mask[3][3];
    double sum;
    BYTE *data;
    if(data == NULL)exit(1);
    data = (BYTE*)calloc(size,sizeof(BYTE));
    memcpy(data,image->data,size);
    
    for(int i = 1 ; i<h-1 ; i++){
        for(int j = 1 ; j<rowsize-1 ; j++){
            for(int k = -1 ; k<2 ; k++){
                for(int l = -1 ; l<2 ; l++){
                    mask[k+1][l+1] = data[(i+k)*rowsize + j+l];
                }
            }
            sum=0;
            for(int k = 0 ; k<=2 ; k++){
                for(int l = 0 ; l<=2 ; l++){
                    sum += mask[k][l] * filter[k][l];
                }
            }
            if(sum > 255)sum=255;
            if(sum < 0)sum=0;
            image->data[i*rowsize+j] = (BYTE)sum;
        }
    }
    free(data);
}
void highpassFilter(IMAGE *image,double filter[3][3]){
    int h,w,rowsize,i,j,k,l;
	BYTE mask[3][3];
	h=image->bmpih.bih;
	w=image->bmpih.biw;
	double sum;
	BYTE *data;
    if(data==NULL)exit(1);
    rowsize = (image->bmpih.bibitcount * w +31)/32*4;
    data = (BYTE*)calloc(h*rowsize,sizeof(BYTE));
    memcpy(data,image->data,h*rowsize);
    for(i = 1 ; i<h-1 ; i++){
        for(j = 1 ; j<rowsize-1 ; j++){
            for(k=-1 ; k<2 ; k++){
                for(l=-1 ; l<2 ; l++){
                    mask[k+1][l+1] = data[(i+k)*rowsize + j + l];
                }
            }
            sum = 0;
            for(k = 0 ; k<3 ; k++){
                for(l = 0 ; l<3 ; l++){
                    sum += mask[k][l] * filter[k][l];
                }
            }
            if(sum<0)sum=0;
            if(sum>255)sum=255;
            image->data[i*rowsize+j] = (BYTE)sum;
        }
    }
    free(data);
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
    int rowsize,size,h,w,n;
    BYTE mask[49];
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    BYTE *data;
    if(data == NULL)exit(1);
    rowsize = (w * image->bmpih.bibitcount + 31)/32*4;
    data = (BYTE*)calloc(h*rowsize,sizeof(BYTE));
    memcpy(data,image->data,h*rowsize);
    for(int i = 3 ; i<h-3 ; i++){
        for(int j = 3 ; j<rowsize-3 ; j++){
            n=0;
            for(int k = -3 ; k<=3 ; k++)
                for(int l = -3 ; l<=3 ; l++)
                    mask[n++] = data[(i+k)*rowsize+j+l];
            image->data[i*rowsize+j] = median(mask);
        }
    }
    free(data);
}


void addNoise(IMAGE *image){
    srand(time(NULL));
    int rowsize,size,h,w;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (w * image->bmpih.bibitcount+31)/32*4;
    size = rowsize * h;
    int nblack = size / 10;
    int nwhite = size / 10;
    int rnd;
    for(int i=0 ; i<nblack ; i++){
        rnd = ((RAND_MAX+1) * rand() + rand())%(size);
        image->data[rnd] = 0;
    }
    for(int i=0 ; i<nwhite ; i++){
        rnd = ((RAND_MAX+1) * rand() + rand())%(size);
        image->data[rnd] = 255;
    }
    return;
}
void findMinMax(IMAGE *image,int *min,int *max){
    int rowsize,size,h,w;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*w+31)/32*4;
    size = rowsize*h;
    *max = image->data[0];
    *min = image->data[0];
    for(int i=1 ; i<size ; i++){
        if(image->data[i] < *min)*min = image->data[i];
        if(image->data[i] > *max)*max = image->data[i]; 
    }
}

void stretch(IMAGE *image,int MIN,int MAX){
    int rowsize,size,h,w;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*w+31)/32*4;
    size = rowsize*h;
    BYTE min,max;
    min = findMin(image);
    max = findMax(image);
    //findMinMax(image,&min,&max);
    for(int i=0 ; i<size ; i++){
        image->data[i] = (MAX - MIN)*(image->data[i]-min)/(max-min)+MIN;
    }
}
BYTE findMin(IMAGE *image){
    int min,max,rowsize,size,h,w;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*w+31)/32*4;
    size = rowsize*h;

    min = image->data[0];
    for(int i=1 ; i<size ; i++){
        if(min>image->data[i]){
            min = image->data[i];
        }
    }
    return min;
}
BYTE findMax(IMAGE *image){
    int min,max,rowsize,size,h,w;
    h = image->bmpih.bih;
    w = image->bmpih.biw;
    rowsize = (image->bmpih.bibitcount*w+31)/32*4;
    size = rowsize*h;

    max = image->data[0];
    for(int i=1 ; i<size ;i++){
        if(max < image->data[i]){
            max = image->data[i];        
        }
    }
    
    return max;
}
/*
 e  y  ö  o
 4 -6  3  1
 2 -7  1  4
 3 -6  5  3
 ----------------
 3  4 -5  3
 6 -6  3  6
 4 -6  3  2
*/