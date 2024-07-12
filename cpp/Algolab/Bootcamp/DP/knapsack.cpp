//item weights = 40 10 20 24
//item values = 280 100 120 120
//max weight = 60
#include<bits/stdc++.h>
using namespace std;

int n,w;
int f(vector<int>w, vector<int>v, int index, int W, vector<vector<int>>&dp){
    if(index == n+1 || W==0) return 0;

    if(dp[index][W]!=0) return dp[index][W];
    
    int ans = f(w,v,index+1,W,dp);
    if(w[index]<=W) ans = max(ans, f(w,v,index+1,W-w[index],dp)+v[index]);

    dp[index][W] = ans;
    
    return ans;
}

int main(){
    /*vector<int>weights = {40,10,20,24};
    vector<int>values = {280,100,120,120};
    vector<vector<int>>dp(5,vector<int>(61,0));*/
    cout<<"Enter number of items : ";
    cin>>n;
    cout<<"Enter max weight : ";
    cin>>w;
    vector<int>weights(n+1);
    vector<int>values(n+1);
    for(int i=1;i<=n;i++){
        cout<<"Enter weight of item "<<i<<" : ";
        cin>>weights[i];
        cout<<"Enter value of item "<<i<<" : ";
        cin>>values[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(w+1,0));
    int ans = f(weights,values,1,w,dp);
    cout<<"Max value : "<<ans<<endl;
return 0;
}