#include<iostream>

using namespace std;

double mpg(double miles,double gallons);
double mpg2(int goals, int misses);

int main(int argc, char const *argv[]){
    /*int miles,gallons;
    cin>>miles>>gallons;
    cout<<mpg(miles,gallons);*/
    cout<<mpg2(45.0,3.0);    
    return 0;
}


double mpg(double miles,double gallons){
    return (miles/gallons);
}
double mpg2(int goals, int misses){
    return (goals - misses);
}