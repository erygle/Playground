#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    double num(5.7);
    cout<<num;
    cout.precision(2);
    cout<<endl<<num;
    return 0;
}
