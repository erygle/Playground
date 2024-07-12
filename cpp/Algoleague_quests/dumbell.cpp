#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    vector<int>arr(n+1);
    vector<int>pre_sum(n+1);
    arr[0]=0;
    pre_sum[0]=0;
    for(int i=1 ; i<=n ; i++){
        cin>>arr[i];
        pre_sum[i] = arr[i] + pre_sum[i-1];
    }
    
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pre_sum[r]-pre_sum[l-1]<<"\n";
    }
    return 0;
}
