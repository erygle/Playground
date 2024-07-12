#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll fib(ll n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    ll n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Fibonacci of "<<n
    <<" is "<<fib(n)<<endl;
    return 0;
}