#include<bits/stdc++.h>
using namespace std;

void start();
void maxmin(int *arr);

int main(int argc, char const *argv[]){
    start();
    return 0;
}

void start(){
    srand(time(NULL));
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i]=rand()%100;
    }
    for(auto k : arr)cout<<k<<" ";
    cout<<endl;
    maxmin(arr);
    
}

void maxmin(int *arr){
    int *ptr = arr;
    int min;
    int max = INT_MIN;
    for(int i=0; i<10; i++){
        if(*ptr<arr[i]){
            max=arr[i];
            ptr=&arr[i];
        }
    }
    int *ptr2= arr;
    for(int i=0; i<10; i++){
        if(*ptr2>arr[i]){
            min=arr[i];
            ptr2=&arr[i];
        }
    }
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
}