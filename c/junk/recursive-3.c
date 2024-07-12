#include<stdio.h>
int sumOfDigits(int num);
int main(int argc, char const *argv[])
{
   
    printf("%d ",sumOfDigits(12345));
    return 0;
}
int sumOfDigits(int num){
    if(num<=0)return 0;
    return((num%10)+sumOfDigits(num/10));
}

