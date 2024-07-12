#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(arr) / sizeof(arr[0]);

    //int *ptr = &arr[0];
    int *ptr = &arr;
    
    int *ptr2 = &arr[size-1];

    for(int i=0; i<10; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        cout<<*ptr2<<" ";
        ptr2--;
    }
    cout<<endl<<*ptr<<endl<<*ptr2<<endl;

    return 0;
}
