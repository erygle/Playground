#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<string.h>
//github kontrol
#define MAX_VALUE 10000
#define MIN_VALUE 5000
#define RANGE 5000
#define NUMBER 1000
#define RANDOM_VALUE rand() % RANGE
#define SUM MIN_VALUE + RANDOM_VALUE
#define FILL for(i=0 ; i<NUMBER ; i++)\
                 arr[i] = SUM
#define SCANNING printf("Enter %d. element : ",i+1)\
                 scanf("%d",&arr[i])
#define FILL2 for(i = 0 ; i<req ; i++)\
                 SCANNING

void swap(int *a,int *b);
void sort(int arr[],int size);
void isPrime(int a);
char copy_array(char *arr1,char *arr2);

/*int main(int argc, char const *argv[]){//find counter that number bigger or lower according to list numbers

    int i,temp,req,counter;
    printf("Enter a number : ");
    scanf("%d",&temp);
    printf("Enter size of array : ");
    scanf("%d",&req);
    int arr[req];
    for(i = 0 ; i<req ; i++){
        printf("Enter your %d. element : ",i+1);
        scanf("%d",&arr[i]);
    }
    counter = 0;
    for(i = 0 ; i<req ; i++){
        if(temp > arr[i]){
            counter++;
        }
    }
    printf("Counter : %d\n",counter);
    return 0; 
}*/

/*int main(int argc, char const *argv[]){//minimum and maximum value of list
    int req,i,j;
    printf("Enter your size : ");
    scanf("%d",&req);
    int arr[req];
    for(i = 0 ; i<req ; i++){
        printf("Enter your %d.element : ",i+1);
        scanf("%d",&arr[i]);}
    sort(arr,req);
    for(i = 0 ; i<req ; i++){
        printf("Your %d.element : %d\n",i+1,arr[i]);}
    printf("Your minimum element : %d\nYour maximum element : %d\n",arr[0],arr[req-1]);
return 0;
}*/

/*int main(int argc, char const *argv[]){//random number generator
    int i,arr[NUMBER];
    FILL;
    for(i = 0 ; i < NUMBER ; i++){
        if(i%10 == 0){
            printf("\n");
        }printf("%d   ",arr[i]);
    }
return 0;
}*/

/*int main(int argc, char const *argv[]){//2 3 1 2 2 3 --> 1 2 2 2 3 3
    int i,j,req,counter;
    printf("Enter your size : ");
    scanf("%d",&req);
    int arr[req];
    for(i = 0 ; i<req ; i++){
        printf("Enter %d. element : ",i+1);
        scanf("%d",&arr[i]);}
    sort(arr,req);
    for(i = 0 ; i<req ; i++){
        printf("Your %d. element : %d\n",i+1,arr[i]);}
    for(i = 0 ; i<req ; i++){
        counter = 0;
        for(j = 0 ; j<req ; j++){
            if(arr[i]==arr[j]){
                counter++;
            }
        }if(counter == 1){
            printf("Your single number is : %d\n",arr[i]);
        }
    }

return 0;
}*/

/*int main(int argc, char const *argv[]){//integer to ascii numbers
    int i;
    for (i = 65 ; i < 91; i++)printf("%d : %c\t%d : %c\n",i,i,i+32,i+32);
return 0;
}*/

/*int main(int argc, char const *argv[]){//character to ascii numbers
    char ch;
    for(ch = 'A';ch <= 'Z';ch++)printf("%d : %c\t%d : %c\n",ch,ch,ch+32,ch+32);
return 0;
}*/

/*int main(int argc, char const *argv[]){//find max and min value of random integer list
    int req,i;
    printf("How many numbers do you want to generate : ");
    scanf("%d",&req);
    srand(time(0));
    int arr[req];
    for(i=0 ; i<req ; i++)arr[i] = rand() % 1000;
    for(i=0 ; i<req ; i++)printf("%d   ",arr[i]);
    int max = arr[0];
    for(i=1 ; i<req ; i++)if(max<arr[i])max = arr[i];
    int min = arr[0];
    for(i=1 ; i<req ; i++)if(min>arr[i])min = arr[i];
    printf("\nYour minimum value is %d.\n",min);
    printf("Your maximum value is %d.\n",max);
return 0;
}*/

/*int main(int argc, char const *argv[]){//2d matrix 1
    int i,j;
    int matrix[3][3] = { {1,2,3},
                         {4,5,6},
                         {7,8,9} };
    for ( i = 0; i < 3; i++){
        for ( j = 1; j < 3; j++){
            matrix[j][i]=matrix[0][i];}
    }for(i=0 ; i<3 ; i++){
        for ( j=0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }printf("\n");}
}*/

/*int main(int argc, char const *argv[]){//2d matrix 2
    int i,j,result[5] = {0,0,0,0,0};
    int arr[3][5] = {{6  ,12 ,28,36,42},
                     {13 ,5  ,8 ,35,49},
                     {100,108,98,51,46}};
    for(i=0 ; i<5 ;i++){
        for(j=0 ; j<3 ; j++){
            result[i] += arr[j][i];}
    }
    for(i=0 ; i<5 ; i++){
        printf("%d ",result[i]);
    }printf("\n");
return 0;
}*/

/*int main(int argc, char const *argv[]){//dice game
    int dice_nums[6] = {0},counter,temp_num;
    srand(time(NULL));
    for(counter = 0 ; counter < 600000 ; counter++){
        temp_num = rand()%6;
        dice_nums[temp_num]++;
    }for ( counter = 0; counter < 6; counter++){
        printf("%d sayisi : %d\n",counter+1,dice_nums[counter]);}
return 0;
}*/

/*int main(int argc, char const *argv[]){//string copy to other array
    char arr1[100],arr2[100];
    
    printf("Enter your string : ");//
    fgets(arr1,100,stdin);

    
    copy_array(arr1,arr2);
    puts("");

    printf("First string : %s",arr1);
    printf("Copy string : %s",arr2);
    
return 0;
}*/

/*int main(int argc, char const *argv[]){//two string concatenate
    char arr1[100],arr2[100];

    printf("Enter your first string : ");
    fgets(arr1,100,stdin);
    printf("Enter your second string : ");
    fgets(arr2,100,stdin);
    
    char *str1=arr1;
    char *str2=arr2;

    while(*(++str1));

    while(*(str1++) = *(str2++));

    printf("Concatenated string: %s",arr1);

return 0;
}*/

/*int main(int argc, char const *argv[]){//reverse of string
    char str1[100],str2[100];

    printf("Enter your string : ");
    fgets(str1,100,stdin);

    char *pt = str1;
    char *pt2 = str2;
    int len=0;
    while(*(pt++)) len++;
    len--;
    pt--;
    while(len >=0){
        *(pt2++) = *(--pt);
        len--;
    }*pt2='\0';
    
    printf("Original string : %s",str1);
    printf("Reverse string : %s",str2);

    puts("");
return 0;
}*/

/*#include<stdio.h>//find squareroot without math.h
#include<math.h>
double findSqrt(double x);
int main(int argc, char const *argv[]){
    double num;
    printf("Enter number : ");
    scanf("%lf",&num);
    printf("%.3lf\n",findSqrt(num));
    return 0;
}

double findSqrt(double x){
    double i;
    for(i=0.01 ; i*i < x ; i += 0.01);
    return i;

}*/

/*#include<stdio.h>//random size odd or even number sorting and seperating
#include<stdlib.h>
#include<time.h>

int main(void){
    srand(time(0));
    int size,even=0,odd=0;
    printf("Enter your size : ");
    scanf("%d",&size);
    int *arr = (int*) calloc(size,sizeof(int));
    for(int i=0 ; i<size ; i++) arr[i] = rand()%1000;
    int oddCounter=0,evenCounter=0;
    for(int i=0 ; i<size ; i++){
        if(arr[i]%2==0) evenCounter++;
        else oddCounter++;
    }
    int *evenArr = (int*) malloc(evenCounter*sizeof(int));
    int *oddArr = (int*) malloc(oddCounter*sizeof(int));
    for(int i=0 ; i<size ; i++){
        if(arr[i]%2==0){
            evenArr[even]=arr[i];
            even++;
        }else{
            oddArr[odd]=arr[i];
            odd++;
        }
    }printf("EVEN NUMBERS-------------------");
    for(int i=0 ; i<evenCounter ; i++){
        if(i%10 == 0) puts("");
        printf("%d   ",evenArr[i]);
    }puts("");
    printf("ODD NUMBERS-------------------");
    for(int i=0 ; i<oddCounter ; i++){
        if(i%10 == 0) puts("");
        printf("%d   ",oddArr[i]);
    }
puts("");
return 0;
}*/

/*#include<stdio.h>//pointer codes 1

int main(void){
	int a = 5;
	int *c;
	c = &a;
	printf("%d",a); //5
	printf("\n%lu",a); //5
	printf("\n%lu",*c); //5
	printf("\n%d",*c); //5
	
	printf("\n%p",a); //0x5
	printf("\n%p",*c); //0x5
	//--------------------------------------
	printf("\n%d",&a); //-1278304788
	printf("\n%d",c); //-1278304788
	
	printf("\n%p",&a); //0x7fffb3ce9dec
	printf("\n%p",c); //0x7fffb3ce9dec
	
	printf("\n%lu",&a); //140736210050540
	
	printf("\n%d",&c); //-1278304784
	
	printf("\n%p",&c); //0x7fffb3ce9df0
printf("\n");
return 0;
}


#include<stdio.h>
#include<string.h>
 
int main(void){
	
	int a = 2, b = 5, c = 8;

   printf("  a && b  = %d \n ",  a && b);
   printf(" b %% a   = %d \n ", b % a );  
   printf(" a / b    = %d \n " , a/b); 
   printf(" 2 * a + 1 < b = %d \n ", 2*a + 1 < b);  
   printf(" b <= c = %d \n "  , b<= c);
   printf(" !!c = %d \n " , !!c); 
   printf(" c > 2 && a > 6 = %d \n " , c> 2 && a > 6); 
   printf(" b == 2||a != 4 = %d \n ", b == 2 || a != 4 );
   printf(" (a + b) * c-- = %d \n ",  (a + b) * c-- );
   printf(" c = ++b = %d \n ",c = ++b);  
   return 0;
	int *ptr = NULL;
	//int a = 5;
	int a[5] = {1,2,3,4,5};
	ptr = &a;
	printf("p *ptr : %p\n",*ptr);//     int ve ptr-----------------------
	printf("p ptr : %p\n",ptr); 
	printf("lu *ptr : %lu\n",*ptr);
	printf("lu ptr : %lu\n",ptr);
	printf("d *ptr : %d\n",*ptr);
	printf("d ptr : %d",ptr);
	
	printf("%d\n",*ptr);//a[0]         array ve ptr-------------------- 
	printf("%d\n",*(ptr+1));//a[1]
	printf("%d\n",*(ptr+2));//a[2]
	
	//3 5 1 3 2
	//4 4 4 5 5
	//9 8 9 7 7
	
	//16 17 14 15 14	
	
	int r,c,sum,matris[3][5]={{3,5,1,3,2},{4,4,4,5,5},{9,8,9,7,7}};
	for(r=0;r<3;r++){
		for(c=0;c<5;c++){
			printf("%d ",matris[r][c]);
		}printf("\n");
	}
	for(r=0;r<5;r++){
		sum=0;
		for(c=0;c<3;c++){
			sum += matris[c][r]; 
		}
		
		printf("%d ",sum);
	}
return 0;
}*/

/*/*#include<stdio.h>//pointer codes 2
#include<stddef.h>
#include<stdlib.h>
void square_void(int a);
int square_int(int a);
int square_ptr(int *a);

int main(int argc, char const *argv[]){
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;
    printf("Num1 value before the void function : %d\n",num1);
    square_void(num1);
    printf("Num1 value after the void function : %d\n\n",num1);

    printf("Num2 value before the int funtion : %d\n",num2);
    square_int(num2);
    printf("Num2 value after the int function : %d\n\n",num2);

    printf("Num3 value before the pointer function : %d\n",num3);
    square_ptr(&num3);
    printf("Num3 value after the pointer function : %d\n",num3);
return 0;
}
void square_void(int a){
    a = a*a;
    printf("Num1 value during the void function : %d\n",a);
}
int square_int(int a){
    a = a*a;
    printf("Num2 value during the int function : %d\n",a);
    return a;
}
int square_ptr(int *a){
    *a = (*a)*(*a);
    printf("Num3 value during the pointer function : %d\n",*a);
}*/

/*#include<stdio.h>//calloc and malloc using
#include<stdlib.h>
int main(int argc, char const *argv[]){
    int size;
    printf("Enter your size : ");
    scanf("%d",&size);

    int *arr = (int*) malloc(size*sizeof(int));
    int *arr2 = (int*) calloc(size,sizeof(int));
    for(int i=0; i<size ;i++){
        printf("%5d",arr[i]);
    }puts("");
    for(int i=0; i<size ;i++){
        printf("%5d",arr2[i]);
    }
    return 0;
}*/

/*#include<stdio.h>//duplicate numbers
int main(void){//1 3 2 1 4
    int temp,req,i,j;
    printf("Enter your size : ");
    scanf("%d",&req);
    int arr[req];
    for(i=0 ; i<req ; i++){
        printf("Enter your %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }for(i=0 ; i<req ; i++){
        temp = arr[i];
        for(j = i+1 ; j<req ; j++){
            if(temp == arr[j]){
                printf("True.\n");
                break;}
        }if(temp == arr[j])break;
        if(i == req-1)printf("False.\n");}
return 0;
}*/

/*#include<stdio.h>//matrix multiplication
#define COL 3
#define ROW 3
void multipl(int arr1[][COL],int arr2[][COL],int arr_product[][COL]);
void multiply(int arr1[][COL],int arr2[][COL],int arr_product[][COL]);
int main(int argc, char const *argv[]){
    int matrix_A[3][3] = {{1,2,3},{4,5,6},{7,8,9}},
        matrix_B[3][3] = {{1,2,1},{0,2,1},{4,1,0}},
        matrix_AB[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    multiply(matrix_A,matrix_B,matrix_AB);
    for(int i ; i<ROW ; i++){
        for(int j=0 ; j<COL ; j++){
            printf("%d ",matrix_AB[i][j]);
        }puts("");
    }
    //   1 2 3    1 2 1    0 0 0
    //   4 5 6    0 2 1    0 0 0
    //   7 8 9    4 1 0    0 0 0


    return 0;
}
void multipl(int arr1[][COL],int arr2[][COL],int arr_product[][COL]){
    for(int i=0 ; i<ROW ; i++){
        for(int j=0 ; j<COL ; j++){
            int sum=0;
            for(int k=0 ; k<ROW ; k++){
                sum += arr1[i][k] * arr2[k][j];
            }
            arr_product[i][j]=sum;
        }
    }
}
void multiply(int arr1[][COL],int arr2[][COL],int arr_product[][COL]){
    int col,row,temp,sum;
    for(row=0 ; row<ROW ; row++){
        for(col=0 ; col<COL ; col++){
            sum=0;
            for(int i=0 ; i<COL ; i++){
                sum += *(*(arr1+row)+i) * *(*(arr2+i)+col);
            }
            *(*(arr_product+row)+col) = sum;
        }
    }

}*/

/*#include<stdio.h>//median of the list

void swap(int *a,int *b){
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void arrangement(int arr[],int size){
	int i,j;
	for ( i = 0; i < size-1; i++)
	{
		for (j = 0; j < size-i-1 ; j++)
		{
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
		
	}
	
}

int main(void){
	int k,req;
	printf("Enter your array size : ");
	scanf("%d",&req);
	int arr[req];
	for(k=0 ; k<req ; k++){
		printf("Enter your %d element : ",k+1);
		scanf("%d",&arr[k]);
	}
	arrangement(arr,req);
	for(k=0 ; k<req ; k++){
		printf("Your %d element : %d\n",k+1,arr[k]);
	}
	printf("Your median of list is %d.\n", arr[(req+1)/2 - 1]);


	return 0;
}*/

/*#include<stdio.h>//red and green card
int compare(int a,int b);
int main(void){
    int counter=0,red,green,controlCard;
    
    printf("Enter red cards : ");
    scanf("%d",&red);
    printf("Enter green cards : ");
    scanf("%d",&green);
    
    controlCard = compare(red,green);

    for(int i=1 ; i<=controlCard ; i++){
        if(red%i==0 && green%i==0) counter++;
    }
    printf("\n%d",counter);

puts("");
return 0;
}
int compare(int a,int b){
    if(a<b) return a;
    else return b;
}*/

/*#include<stdio.h>//reverse of number
#include<math.h>
int main(void){//12345
    int number,digits,dirNumber,temp;
    printf("Enter number : ");
    scanf("%d",&number);
    digits = (int)log10(number);
    dirNumber = 0;
    while(number > 0){
        temp = number % 10;
        dirNumber += temp*pow(10,digits);
        digits--;
        number = number / 10;
    }printf("\n%d\n",dirNumber);
return 0;
}*/

/*int main(void){//single number of the list
    int i,j,req,counter;
    printf("Enter your size : ");
    scanf("%d",&req);
    int arr[req];
    for(i = 0 ; i<req ; i++){
        printf("Enter %d. element : ",i+1);
        scanf("%d",&arr[i]);}
    sort(arr,req);
    for(i = 0 ; i<req ; i++){
        printf("Your %d. element : %d\n",i+1,arr[i]);}
    for(i = 0 ; i<req ; i++){
        counter = 0;
        for(j = 0 ; j<req ; j++){
            if(arr[i]==arr[j]){
                counter++;
            }
        }if(counter == 1){
            printf("Your single number is : %d\n",arr[i]);
        }
    }

return 0;
}*/

/**/





void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[],int size){
    int i,j;
    for(i = 0 ; i<size-1 ; i++){
        for(j = 0 ; j<size-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void isPrime(int a){
    int i;
    for(i=2 ; i<a/2 ; i++){
        if(a%i == 0){
            break;
        }
    }
}
char copy_array(char *arr1,char *arr2){
    char *str1 = arr1;
    char *str2 = arr2;
    
    while(*(str2++) = *(str1++));
    return *arr2;
}