#include<iostream>
using namespace std;
#define SIZE 20
#define DIVISOR 10000

void swap(int &a,int &b);
void createList(int arr[],int size);
void selection(int arr[],int size);
void display(int arr[],int size);
int smallest(const int arr[],int start,int size);

int main(int argc, char const *argv[]){
    srand(time(NULL));
    int arr[SIZE];
    createList(arr,SIZE);
    //display(arr,SIZE);
    selection(arr,SIZE);
    cout<<endl<<"After Sorting."<<endl;
    //display(arr,SIZE);
    return 0;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void createList(int arr[],int size){
    int i(0);
    while(i<size){
        arr[i] = rand() % DIVISOR;
        i++;
    }
}
void selection(int arr[],int size){
    int indexOfsmallestValue;
    for(int index=0; index<size; index++){
        indexOfsmallestValue = smallest(arr,index,SIZE);
        if(arr[index] != indexOfsmallestValue) swap(arr[index],arr[indexOfsmallestValue]);
    }
}
void display(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}
int smallest(const int arr[],int start,int size){
    int smallest = arr[start];
    int index = start;
    for(int i=start+1; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            index = i;
        }
    }return index;
}