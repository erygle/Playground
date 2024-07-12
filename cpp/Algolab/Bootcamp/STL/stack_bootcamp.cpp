#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s1;
    cout<<"Empty : "<<s1.empty()<<endl;
    
    s1.push(10);
    s1.push(30); 
    s1.push(50);
    s1.push(40);
    s1.push(20);

    cout<<"Empty : "<<s1.empty()<<endl;
    cout<<"Size : "<<s1.size()<<endl;
    cout<<"Top : "<<s1.top()<<endl;
    
    s1.pop();
    
    cout<<"Top : "<<s1.top()<<endl;
    cout<<"Size : "<<s1.size()<<endl;
    
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    
    cout<<endl;
    cout<<"Empty : "<<s1.empty()<<endl;
    cout<<"Size : "<<s1.size()<<endl;
    return 0;
}