//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll num,x,y;
ll f(ll n){
    if(!n)return 1;
    if(n<0)return 0;
    return f(n-x)+f(n+y);
}

int main() {
// write your code here
    cin>>num;
    cin>>x>>y;
    cout<<f(num);
	return 0;
}
