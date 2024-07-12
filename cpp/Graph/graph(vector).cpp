#include<bits/stdc++.h>

using ll = long long;
using namespace std;

int32_t main(){
    int size,edges;
    cin>>size>>edges;
    vector<vector<int>>arr(size+1);
    
    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for(int i=1; i<=size ; i++){
        cout<<i<<" : ";
        for(auto &k : arr[i]){
            cout<<k<<" ";
        }cout<<endl;
    }
    return 0;
}
