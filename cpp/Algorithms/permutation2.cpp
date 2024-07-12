
/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findUniquePermutations(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        if (i == start || nums[i] != nums[start]) {
            swap(nums[start], nums[i]);
            findUniquePermutations(nums, start + 1, result);
            swap(nums[start], nums[i]); // Geri al
        }
    }
}

vector<vector<int>> uniquePermutations(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end()); // Küme elemanlarını sırala
    findUniquePermutations(nums, 0, result);
    return result;
}

int main() {
    vector<int> nums = {1,1,3};
    vector<vector<int>> uniquePerms = uniquePermutations(nums);

    for (const auto& perm : uniquePerms) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}*/
#include<bits/stdc++.h>

using namespace std;

void permute(vector<int>arr,int f,int l,set<vector<int>>ans){
    if(f==l){
        ans.insert(arr);
        for(auto k : arr)cout<<k<<" ";
        cout<<endl;
        return;
    }
    else{
        for(int i=f ; i<=l ; i++){
            if(i==f || arr[i] != arr[f]){
                swap(arr[i],arr[f]);
                permute(arr,f+1,l,ans);
            }
        }
    }
}
int main(int argc, char const *argv[]){
    set<vector<int>>ans;
    vector<int>nums = {2,2,1,1};
    permute(nums,0,nums.size()-1,ans);
    //for(auto k : ans)cout<<ans;
    return 0;
}
