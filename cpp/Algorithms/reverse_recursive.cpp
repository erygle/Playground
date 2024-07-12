#include<iostream>
#include<cmath>

using namespace std;

int getDigits(int num);
int reverse(int num,int digits);


int main(int argc, char const *argv[]){//4512  2154
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int digits = getDigits(num);
    int reverse_num = reverse(num,digits);

    return 0;
}

int getDigits(int num){
    int i=0;
    while(num>0){
        if(num<0)break;
        i++;
        num = num/10;}
    return i;
}

int reverse(int num, int digits){
    int i = num%10;
    int reverse = 0;
    reverse += i*pow(10,digits-1);
}