#include<bits/stdc++.h>

using namespace std;

using ll = long long ;

int main(int argc, char const *argv[]){
    ll n,k;
    cin>>n>>k;
    ll n_temp = ((3*(k-1))/2)+1;
    if(n_temp==0)n_temp += 
    if(k>n)k = n - (k%n);
    if(k%2 == 1){
        
        cout<<n_temp<<endl;
    }
    else{
        ll n_temp = (3*(k-1)/2)+1;
        cout<<n_temp<<" "<<n_temp+1<<endl;
    }
    return 0;
}
