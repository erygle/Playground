#include<iostream>
#include<memory> 
using namespace std;

class Class{
    public:
        Class(){
            cout<<"Constructor invoked."<<endl;
        }
        ~Class(){
            cout<<"Destructor invoked."<<endl;
        }

};


int main(int argc, char const *argv[]){
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    unique_ptr<int>unPtr2 = move(unPtr1);
    cout<<&unPtr1<<endl;
    cout<<&unPtr2<<endl;
    cout<<*unPtr2<<endl;
    //{unique_ptr<Class>unPtr3 = make_unique<Class>();}
    shared_ptr<Class>shrPtr1 = make_shared<Class>();
    cout<<"Shared count : "<<shrPtr1.use_count()<<endl;
    {shared_ptr<Class>shrPtr2 = shrPtr1;
    cout<<"Shared count in brackets : "<<shrPtr1.use_count()<<endl;}
    cout<<"Shared count : "<<shrPtr1.use_count()<<endl;
    return 0;
}
