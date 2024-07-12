#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(int argc, char const *argv[]){
    ll nodes,edges;
    cin>>nodes>>edges;
    vector<vector<ll>>arr(nodes+1);
    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for(int i=1 ; i<=nodes ; i++){
        ll ct=0;
        for(auto edges : arr[i]){
            ct++;
        }
        cout<<ct<<" ";
    }
    return 0;
}
