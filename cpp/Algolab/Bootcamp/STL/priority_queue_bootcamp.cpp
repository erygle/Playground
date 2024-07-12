#include<iostream>
#include<queue>
using namespace std;
int main(){
    //büyükten küçüğe
    //priority_queue<int> pq1;
    
    //küçükten büyüğe
    priority_queue<int,vector<int>,greater<int>> pq1;

    cout<<"Empty : "<<pq1.empty()<<endl;
    
    pq1.push(10);
    pq1.push(30); 
    pq1.push(50);
    pq1.push(40);
    pq1.push(20);
    
    cout<<"Empty : "<<pq1.empty()<<endl;
    cout<<"Size : "<<pq1.size()<<endl;
    cout<<"Top : "<<pq1.top()<<endl;
    
    pq1.pop();
    
    cout<<"Top : "<<pq1.top()<<endl;
    cout<<"Size : "<<pq1.size()<<endl;
    
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    cout<<"Empty : "<<pq1.empty()<<endl;
    cout<<"Size : "<<pq1.size()<<endl;
    return 0;
}