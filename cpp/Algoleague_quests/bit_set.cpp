#include<bits/stdc++.h>

using namespace std;
using ll = long long ;
int main(int argc, char const *argv[]){
    ll num;
    cin>>num;
    bitset<sizeof(ll)*8>bin(num);
    cout<<bin.count();
    return 0;
}
