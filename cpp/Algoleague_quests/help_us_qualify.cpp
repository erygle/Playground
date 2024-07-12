//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;

int main() {
// write your code here
    long long h,m;
    cin>>h>>m;
    if(m==59){
        cout<<"YES";
        return 0;
    }
    long long min = h*60 + m;
    
    if(min%59==0){
        cout<<"YES";
        return 0;
    }
    long long remaining_min = min % 59;
    while(--remaining_min){
        if(min % remaining_min == 0){
            if(((min / remaining_min) - 59) % 60 == 0){
                cout<<"YES";
                return 0;
            }
        }
    }
     cout<<"NO";
    
	return 0;
}