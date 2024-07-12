#include<bits/stdc++.h>
using namespace std;

bool isSubSet(vector<int>arr,int n,int sum){
    if(sum==0)return true;
    if(n==0)return false;

    if(arr[n-1]>sum)return isSubSet(arr,n-1,sum);

    return isSubSet(arr,n-1,sum) || isSubSet(arr,n-1,sum - arr[n-1]);
}
int main(){
    vector<int>arr;
    for(int i=0;i<10;i++){
        arr.push_back(rand()%50);
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<isSubSet(arr,10,16);
    return 0;
}
