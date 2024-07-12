#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(10,1);
    //v.push_back(1);
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
