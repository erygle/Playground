#include<bits/stdc++.h>
using namespace std;

int first_digit_calc(int n){
    if(n < 10){
        return n;
    }
    first_digit_calc(n/10);
}

int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    
    int last_digit = num % 10;
    int first_digit = first_digit_calc(num);
    
    cout<<"Num : "<<num<<endl;
    cout<<"First digit : "<<first_digit<<endl;
    cout<<"Last digit : "<<last_digit<<endl;

    return 0;
}
