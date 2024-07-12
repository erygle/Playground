#include<bits/stdc++.h>
//#define int long long;
using namespace std;
 
int32_t main(int32_t argc, char const *argv[]){
    int n,q;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    cin>>q;
    while(q--){
        int l_,r_;
        cin>>l_>>r_;
        int l=0 ,r=n;
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]>=l_){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        int left=l;
        //if(arr[n-1]<l_)l++;
        l=-1,r=n-1;
        while(l<r){
            int mid=(l+r+1)/2;
            if(arr[mid]<=l_){
                l=mid;
            }else{
                r=mid-1;
            }
        }
        int right=l;
        int ans = right-left+1;
        cout<<ans<<" ";
    }
 
    return 0;
}