#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]){
    ll t,e;
    cin>>t>>e;
    vector<ll>other_team(t);
    vector<ll>eren_team(e);
    
    for(ll i=0 ; i<t ; i++)cin>>other_team[i];
    for(ll i=0 ; i<e ; i++)cin>>eren_team[i];
    
    sort(other_team.begin(),other_team.end());    
    sort(eren_team.begin(),eren_team.end());    
    
    for(auto k : eren_team){
        ll temp = lower_bound(other_team.begin(),other_team.end(),k) - other_team.begin();
        cout<<temp<<" ";
    }
    
    return 0;
}

