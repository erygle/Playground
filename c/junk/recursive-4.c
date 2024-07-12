#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void printNumbers(int lower,int upper);
int fibo(int a);//1 1 2 3 5 8 13 21 34
void printEvenOdd(int cur, int limit);
int sumEvenOdd(int cur, int limit);
int reverse(int num);
int factorial(int num);
int isPalindrome(int num);
int sumOfDigits(int num);
void printArray(int arr[],int size);
int sumOfArray(int arr[],int start,int size);

int main(int argc, char const *argv[]){
    //printNumbers(5,13);
    //for (int i = -5; i < 8; i++) printf("%d ",fibo(i));
    //printEvenOdd(3,14);
    //printf("\n%d ",sumEvenOdd(3,8));
    //printf("%d ",reverse(12345));
    //printf("%d",factorial(2));
    //printf("%d ",isPalindrome(151));
    /*for(int i=100; i<1001; i++){
        if(isPalindrome(i)==1)printf("%d ",i);
        if(i%100==0)printf("\n");
    }*/
    //printf("%d ",sumOfDigits(12345));
    int arr[5] = {1,2,3,4,5};
    //printArray(arr,5);
    printf("%d",sumOfArray(arr,0,5));
    
    return 0;
}

void printNumbers(int lower,int upper){
    if(lower > upper)return;
    printf("%d ",upper);
    printNumbers(lower,upper-1);
    return;
}
int fibo(int a){
    if(a<1) fibo(1);
    if(a == 1 || a == 2)return 1;
    return fibo(a-1) + fibo(a-2);
}
void printEvenOdd(int cur, int limit){
    if(cur > limit)return;
    if(cur % 2 == 0){
        printf("%d ",cur);
        printEvenOdd(cur+2,limit);
    }else{
        printf("%d ",cur);
        printEvenOdd(cur+2,limit);
    }
}
int sumEvenOdd(int cur, int limit){
    if(cur > limit) return 0;
    if(cur % 2 == 0){
        printf("%d ",cur);
        return cur + sumEvenOdd(cur+2,limit);
        }
    else{//3 9
        printf("%d ",cur);
        return cur + sumEvenOdd(cur+2,limit);
    }
}
int reverse(int num){
    int digits = log10(num);

    if(num == 0) return 0;

    return num%10 * pow(10,digits) + reverse(num/10);
}
int factorial(int num){
    if(num<1)return 1;
    return num * factorial(num-1);
}
int isPalindrome(int num){
    int rev = reverse(num);
    if(rev == num) return 1;
    return 0;
}
int sumOfDigits(int num){
    if(num<=0)return 0;
    return ((num%10) + sumOfDigits(num/10));
}
void printArray(int arr[],int size){
    static int i = 0;
    if(i == size)return;
    printf("%d ",arr[i++]);
    printArray(arr,size);
}
int sumOfArray(int arr[],int start,int size){
    if(start == 5)return 0;
    return arr[start] + sumOfArray(arr,start+1,5);
}