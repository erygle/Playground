#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    
    cout<<*(upper_bound(arr.begin(),arr.end(),60))<<endl;
    cout<<*(lower_bound(arr.begin(),arr.end(),60));

    return 0;
}