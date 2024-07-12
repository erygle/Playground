#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int target;
    cin>>target;
    int counter = 0;
    for(int i=1 ; i<target/2+1 ; i++){
        counter += (target/i)-(i-1);
    }cout<<counter;
    return 0;
}
