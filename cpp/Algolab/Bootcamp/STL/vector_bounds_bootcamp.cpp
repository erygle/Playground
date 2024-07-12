#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
using namespace std;
int main(){
    vector<int> arr = {5,14,22,37,45 , 54,67,71,83,92};
    int targetValue = 92;

    auto it = lower_bound(arr.begin(), arr.end(), targetValue);
    cout<< targetValue <<" lower bound is "<< *it <<" and distance is "<< it - arr.begin() <<endl;
    it = upper_bound(arr.begin(), arr.end(), targetValue);
    cout<< targetValue <<" upper bound is "<< *it <<" and distance is "<< it - arr.begin() <<endl;
    
    return 0;
}
