#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter your size : ";
    cin>>size;

    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter "<<i+1<<".element : ";
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<" ";
    }
    puts("");
    delete[]arr;
    *arr = NULL;
    
    return 0;
}
