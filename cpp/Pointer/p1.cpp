#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printNumber(int *number);
void printChar(char *character);
void print(auto *ptr);

int main(int argc, char const *argv[]){
    int x= 5;
    char y= 'a';
    printNumber(&x);
    printChar(&y);
    print(&x);
    print(&y);
    return 0;
}

void printNumber(int *number){
    cout<<*number<<endl;
}
void printChar(char *character){
    cout<<*character<<endl;
}
void print(auto *ptr){
    cout<<*ptr<<endl;
}