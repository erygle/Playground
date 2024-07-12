#include<iostream>
using namespace std;

template<typename T>

T square(T value){
    return value*value;
}
int main(int argc, char const *argv[])
{
    cout<<square(4.15);
    cout<<endl;
    cout<<square(4);
    return 0;
}
