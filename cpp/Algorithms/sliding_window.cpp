#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    vector<int>arr;
    for(int i=0 ; i<10 ; i++){
        int temp = rand()%100;
        arr.push_back(temp);
    }
    int n = arr.size()-1;
    int k = 3;
    int wsum = 0;
    int msum = INT_MIN;
    int i = 0, j = 0;
    while(i <= n-k+1){
        while(j-i+1 < n-k-2){
            wsum+=arr[j];
            j++;
        }
        //cout<<wsum<<endl;
        msum = max(wsum,msum);
        wsum -= arr[i];
        i++;
    }cout<<msum;
    return 0;
}
