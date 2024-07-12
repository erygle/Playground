#include<bits/stdc++.h>
//#define int long long;
using namespace std;

int32_t main(int32_t argc, char const *argv[]){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)cin>>arr[i];


    while(q--){
        int x;
        cin>>x;
        int l=-1,r=n-1;
        while(l<r){
            int mid = (l + r + 1) / 2;
            if(arr[mid]<=x){
                l=mid;
            }else{
                r=mid-1;
            }

        }
        cout<<l+1<<endl;
    }

    return 0;
}
