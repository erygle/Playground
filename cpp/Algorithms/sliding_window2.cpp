#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    vector<int>arr;
    srand(time(NULL));
    for(int i=0 ; i<10 ; i++){
        int temp = rand()%10;
        arr.push_back(temp);
    }
    for(auto k : arr)cout<<k<<" ";
    cout<<endl;
    int k = 5;
    int wsum = 0, msum = INT_MIN;
    for(int i=0 ; i<k; i++)wsum += arr[i];
    msum = max(msum,wsum);
    //cout<<wsum<<endl;
    int i = 0;
    for(int j=k ; j<arr.size() ; j++){
        wsum -= arr[i];
        i++;
        wsum += arr[j];
        msum = max(msum,wsum);
        //cout<<wsum<<endl;
    }cout<<msum;
    return 0;
}
