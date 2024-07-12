//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
// write your code here
    ll x,y;
    cin>>x>>y;
    if((x | y) != x)cout<<-1;
    else cout<<(x^y);

	return 0;
}
