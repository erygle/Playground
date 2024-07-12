#include<iostream>
using namespace std;

void f(int n, double m);
void f(double n, int m);

int main(int argc, char const *argv[]){
    f(5,2.0);
    cout<<endl;
    f(5.0,2);
    return 0;
}
void f(int n, double m){
    cout<<"Function call 1.";
}
void f(double n, int m){
    cout<<"Function call 2.";
}