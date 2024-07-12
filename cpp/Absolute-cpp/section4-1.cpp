#include<iostream>

using namespace std;
void getNumbers(int& num1, int& num2);
void swapNumbers(int& num1, int& num2);
void printNumbers(int num1,int num2);
int main(int argc, char const *argv[]){
    int num1,num2;
    getNumbers(num1,num2);
    printNumbers(num1,num2);
    swapNumbers(num1,num2);
    cout<<endl<<"After swap";
    printNumbers(num1,num2);
    return 0;
}


void getNumbers(int& num1, int& num2){
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
}
void swapNumbers(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void printNumbers(int num1,int num2){
    cout<<endl<<"Your first number : "<<num1<<endl<<"Your second number : "<<num2;
}