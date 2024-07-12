#include<iostream>
#include<cmath>
#define ARRAY_SIZE 5

using namespace std;

void newLine();
void fillArray(int arr[],int size,int &usedNums,double &average);
void printLine(const int arr[],int usedNums,double average);


int main(int argc, char const *argv[]){
    int arr[ARRAY_SIZE],usedNums;
    double average;
    fillArray(arr,ARRAY_SIZE,usedNums,average);
    printLine(arr,usedNums,average);
    newLine();
    return 0;
}

void newLine(){cout<<endl;}
void fillArray(int arr[],int size,int &usedNums,double &average){
    int indexNum(0),value,sum(0);
    cout<<"Enter values up to "<<size;
    newLine();
    cin>>value;
    while((value>0)&&indexNum<size){
        arr[indexNum]=value;
        indexNum++;
        sum += value;
        cin>>value;
    }
    usedNums = indexNum;
    average = sum/static_cast<double>(usedNums);
    //cout<<usedNums<<endl<<average<<endl;
}
void printLine(const int arr[],int usedNums,double average){
    cout<<"Average of "<<usedNums<<" number is "<<average;
    newLine();
    int index=0;
    while(index<usedNums){
        cout<<arr[index]<<" is "<<abs(average-arr[index])<<" away from to average";
        newLine();
        index++;
    }
}