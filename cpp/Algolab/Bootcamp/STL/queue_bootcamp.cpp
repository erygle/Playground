#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1;
    cout<<"Empty : "<<q1.empty()<<endl;
    
    q1.push(10); //30 50 40 20
    q1.push(30); 
    q1.push(50);
    q1.push(40);
    q1.push(20);
    
    cout<<"Empty : "<<q1.empty()<<endl;
    cout<<"Size : "<<q1.size()<<endl;
    cout<<"Front : "<<q1.front()<<endl;
    cout<<"Back : "<<q1.back()<<endl;
    
    q1.pop();
    
    cout<<"Front : "<<q1.front()<<endl;
    cout<<"Back : "<<q1.back()<<endl;
    cout<<"Size : "<<q1.size()<<endl;
    
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"Empty : "<<q1.empty()<<endl;
    cout<<"Size : "<<q1.size()<<endl;
    return 0;
}