#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    set<int> s1;
    cout<<"Empty : "<<s1.empty()<<endl;
    s1.insert(30); 
    s1.insert(10);
    s1.insert(50);
    s1.insert(40);
    s1.insert(20);
    cout<<"Empty : "<<s1.empty()<<endl;
    for(auto k : s1)
        cout<<k<<" ";
    cout<<endl;
    set<int> s2={1,2,2,3,3,3,4,4,4,4};
    cout<<"Set 2 Size : "<<s2.size()<<endl;
    /*for(auto i=s2.begin();i!=s2.end();i++){
        if(*i==2){
            cout<<"Found 2"<<endl;
            break;
        }
    }*/
    auto it = s2.find(3);
    if(it != s2.end())
        cout<<"Found 3"<<endl;
    
    multiset<int> s3={1,2,2,3,3,3,4,4,4,4};
    for(auto k : s3)
        cout<<k<<" ";
    cout<<endl;

    unordered_set<int> s4={30,10,50,40,20};
    for(auto k : s4)
        cout<<k<<" ";
    cout<<endl;
    return 0;
}