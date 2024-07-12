#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int size,q;
    cin>>size;
    
    vector<int>arr(size);
    
    for(int i=0 ; i<size ; i++)cin>>arr[i];
    
    sort(arr.begin(),arr.end());
    
    cin>>q;
    int num;
    for(int i=0 ; i<q ; i++){
        cin>>num;
        //auto it = ;
        if(find(arr.begin(),arr.end(),num)!=arr.end()){
            cout<<"Yes "<<find(arr.begin(),arr.end(),num)-arr.begin()+1<<endl;
        }
        else{
            int a=upper_bound(arr.begin(),arr.end(),num)-arr.begin();
            cout<<"No "<<a+1<<endl;
        }
    }
    
    return 0;
}
