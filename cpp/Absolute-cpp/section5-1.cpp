#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int arr[] = {10,20,30,40};
    //for (int x : arr)cout<<x<<" ";
    for(auto& x: arr)x++;
    for(auto& x: arr)cout<<x<<endl;
    return 0;
}
