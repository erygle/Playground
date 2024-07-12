#include<stdio.h>
double pow(double base, int exponent);
int main(int argc, char const *argv[]){
    printf("%G",pow(2,-3));
    return 0;
}
double pow(double base, int exponent){
    if(exponent==0)return 1;
    else if(exponent > 0){
        return base * pow(base,exponent-1);
    }
    else{
        return 1/pow(base,-exponent);
    }
}