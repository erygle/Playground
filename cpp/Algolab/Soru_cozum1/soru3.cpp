#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swap2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(int argc, char const *argv[]){
    int a,b;
    cin>>a>>b;
    
    cout<<"Fonksiyondan once a : "<<a<<" b : "<<b<<endl;//a=5 b=10  
    //swap2(a,b);
    //swap(a,b);
    swap(&a,&b);

    cout<<"Fonksiyondan sonra a : "<<a<<" b : "<<b<<endl;
    return 0;
}
