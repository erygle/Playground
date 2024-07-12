#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int a;
    cin>>a;
    int *ptr = &a;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    
    
    
    
    int **ptr2 = &ptr;
    cout<<"ptr2 : "<<ptr2<<endl;
    return 0;
}
