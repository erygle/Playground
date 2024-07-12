#include<iostream>
using namespace std;
#define LOG(x) cout<<x<<endl
int main(int argc, char const *argv[]){
    int a=5;
    int b=10;
    int c=15;
    int *ptr=NULL;
    
    ptr = &a;

    *ptr = b;

    ptr = &b;

    *ptr = c;

    ptr = &c;

    *ptr = a;
    
    LOG(a);
    LOG(b);
    LOG(c);
    return 0;
}
