#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    vector<vector<int>>arr(n);
    vector<int>arr_temp(n);
    for(int i=0 ; i<n ; i++)cin>>arr_temp[i];
    //arr.push_back(arr_temp);
    arr[0]=arr_temp;
    //for(auto k : arr[0])cout<<k<<" ";
    for(int i=1 ; i<n ; i++){
        int temp;
        vector<int>arr_temp2;
        for(int j=0 ; j<arr[i-1].size()-1 ; j++){
            int num = arr[i-1][j]+arr[i-1][j+1];
            arr_temp2.push_back(num);
        }
        arr[i]=arr_temp2;
    }
    for(int i=n-1 ; i>=0 ; i--){
        for(auto k : arr[i])cout<<k<<" ";
        cout<<endl;
    }
    return 0;
}
