#include<iostream>

using namespace std;

void fillUp(int a[],int size);
void getNum(auto &num);

int main(int argc, char const *argv[]){
    int arr[5],num;
    /*getNum(num);
    cout<<num<<endl;*/
    fillUp(arr,5);
    for(int j=0; j<5; j++)cout<<arr[j]<<endl;
    return 0;
}
void fillUp(int a[],int size){
    for(int i=0; i<size; i++){
        cin>>a[i];
    }
}
void getNum(auto &num){
    cin>>num;
}