#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll fibonacci(ll n){
    vector<ll> fib(n+1);
    fib[0] = 0;
    fib[1] = 1;
    for(ll i=2;i<=n;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main(){
    ll n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Fibonacci of "<<n
    <<" is "<<fibonacci(n)<<endl;
    return 0;
}