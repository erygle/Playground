#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(int argc, char const *argv[]){
    ll size;
    cin>>size;
    vector<ll>arr(size);
    vector<ll>sum_arr;
    for(ll i=0 ; i<size ; i++)cin>>arr[i];
    if(size==1){
        cout<<abs(arr[0]);
        return 0;
    }
    ll minDiff = LONG_LONG_MAX;
    ll closest = 0;
    ll sum=0;
    for(ll i=0 ; i< (1<<size) ; i++){
        for(ll j=0 ; j<size ; j++){
            if(i & (1<<j)){
                sum+=arr[j];
            }
        }
        /*sum = abs(sum);
        sum_arr.push_back(sum);*/
    }
    //sort(sum_arr.begin(),sum_arr.end());
    ll diff=abs(sum);
    if(diff<minDiff){
        minDiff = diff;
        closest = sum;
    }
    
    //cout<<sum_arr[0];
    cout<<closest;

    return 0;
}
