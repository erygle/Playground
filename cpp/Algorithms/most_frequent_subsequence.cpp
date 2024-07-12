#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums1 = {1,2,3,4,5};
    vector<int>nums2 = {1,2,3,4,5};
    //nums3 oluştur ve nums1 ile nums2 yi bu vektöere ata
    vector<int>nums3=nums1;
    nums3.insert(nums3.end(), nums2.begin(), nums2.end());
    sort(nums3.begin(), nums3.end());
    map<int,int>mp;
    for(auto k:nums3){
        mp[k]++;
    }
    int max=-1;

    for(auto i:nums3){
        cout<<i<<" ";
    }
    return 0;
}