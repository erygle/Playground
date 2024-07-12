#include<bits/stdc++.h>

using namespace std;
long long multiple(string num){
    vector<int>arr;
    for(char k : num){
        int digit = k - '0';
        if(digit != 0)arr.push_back(digit);
        else continue;
    }long long sum=1;
    for(int k : arr){
        sum*=k;
    }
    return sum;
}
int main(int argc, char const *argv[]){
    string num;
    cin>>num;
    long long sum=multiple(num);

    while(sum>=10){
        string temp = to_string(sum);
        sum=multiple(temp);
    }
    cout<<sum;
    return 0;
}
