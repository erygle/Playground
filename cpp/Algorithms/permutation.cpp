#include<bits/stdc++.h>

using namespace std;

void permute(vector<int>arr,int f,int l);

int main(int argc, char const *argv[])
{
    vector<int>arr = {1,2,3};
    permute(arr,0,arr.size()-1);
    return 0;
}

void permute(vector<int>arr,int f,int l){
    if(f == l){
        for(auto k : arr)cout<<k<<" ";
        cout<<endl;
    }
    else{
        for(int i=f ; i<=l ; i++){
            swap(arr[f],arr[i]);
            permute(arr,f+1,l);
            swap(arr[i],arr[f]);
        }
    }
}