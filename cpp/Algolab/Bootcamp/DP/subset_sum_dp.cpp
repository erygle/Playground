#include<bits/stdc++.h>
using namespace std;
bool subset(vector<int>arr,int n,int target){
    vector<vector<bool>>dp(n+1,vector<bool>(target+1,false));
    
    for(int i=0 ; i<=n ; i++)
        dp[i][0] = true;

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=target ; j++){
            if(j<arr[i-1]){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][target];
}
int main(){
    /*vector<int>arr={2,3,7,8,10};
    int n = arr.size();
    int target = 16;
    bool ans = subset(arr,n,target);
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/
    //bir sAYININ bit değerlerinde sadece bir tane 1 olduğunu kontrol et
    bitset<32>bit(52);
    cout<<bit.count();
    return 0;
}