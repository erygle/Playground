#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s = {5,13,37,50,55,69,73,82,94,96};
    int targetValue = 80;
    
    auto low = s.lower_bound(targetValue); 
    cout<< targetValue <<" lower bound is "<<*low<<" and index is "<<distance(s.begin(),low)<<endl;
    
    auto up = s.upper_bound(targetValue);
    cout<< targetValue <<" upper bound is "<<*up<<" and index is "<<distance(s.begin(),up)<<endl;
    
    return 0;
}