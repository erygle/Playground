#include<iostream>
#include<vector>
#include<algorithm>

//#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> arr;
    
    cout<<"Empty : "<<arr.empty()<<endl;

    for(int i=1; i<=8; i++)
        arr.push_back(i);

    cout<<"Empty : "<<arr.empty()<<endl;
    cout<<"Size : "<<arr.size()<<endl;

    arr.resize(10);

    /*for(auto i=arr.begin();i!=arr.end();i++)
        cout<<*i<<" ";
    cout<<endl;*/

    for(auto k : arr)
        cout<<k<<" ";
    cout<<endl;

    arr.erase(arr.end()-1);
    arr.erase(arr.end()-1);
    arr.erase(arr.begin()+1,arr.begin()+3);    //[begin,end)
    cout<<"Size : "<<arr.size()<<endl;

    for(auto i=arr.begin();i!=arr.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    reverse(arr.begin(),arr.end()); 
    for(auto k : arr)
        cout<<k<<" ";
    cout<<endl;

    sort(arr.begin(),arr.end());
    for(auto k : arr)
        cout<<k<<" ";
    cout<<endl;

    return 0;
}
