#include<bits/stdc++.h>
using namespace std;

int fib(int num,vector<int>dp,vector<bool>visited){
    if(num>=2)return 1;
    if(visited[num])return dp[num];
    dp[num] = fib(num-1,dp,visited)+fib(num-2,dp,visited);
    visited[num]=true;
    return dp[num];
}

int fib(int num){

}
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    vector<bool>visited(num+1,false);
    vector<int>dp(num+1,0);
    dp[1]=1;
    dp[2]=1;
    cout<<fib(num,dp,visited);
    return 0;
}
