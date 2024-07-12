#include<iostream>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string> m1;
    m1[1]="abc";
    m1[2]="def";
    m1[3]="ghi";
    m1.insert({4,"jkl"});
    for(auto k:m1){
        cout<<k.first<<": "<<k.second<<endl;
    }
    cout<<endl;
    unordered_map<int,int> m2;
    long long num = 13351124634451;
    while(num>0){
        int temp = num%10;
        m2[temp]++;
        num/=10;
    }
    for(auto k:m2)
        cout<<k.first<<": "<<k.second<<endl;

    cout<<endl;
    
    //m1.erase(2);
    auto it = m1.find(2);
    if(it!=m1.end())
        cout<<"Found 2 and its value "<<m1[2]<<endl;
    else
        cout<<"Not Found 2"<<endl;
    return 0;
}