#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int row , col;
    cout<<"row,col"<<endl;
    cin>>row>>col;
    srand(time(NULL));
    int**table = new int*[row];
    
    for(int i=0; i<row; i++){ 
        table[i] = new int[col];
        for(int j=0; j<col; j++){
            table[i][j] = rand() % 100;
            cout<<table[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0; i<row; i++)delete[]table[i];
    delete[]table;
    **table=NULL;
    return 0;
}
