#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(const vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& subsets) {
    if (index == nums.size()) {
        subsets.push_back(current);
        return;
    }

    // İndex'teki elemanı dahil etmeme seçeneği
    generateSubsets(nums, index + 1, current, subsets);

    // İndex'teki elemanı dahil etme seçeneği
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current, subsets);

    // Backtracking: Eğer dahil etme seçeneği yapıldıysa geri al
    current.pop_back();
}

void printSubsets(const vector<vector<int>>& subsets) {
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
}

int main() {
    vector<int> nums = {4, 2, 6, 10};
    vector<int> current;
    vector<vector<int>> subsets;

    generateSubsets(nums, 0, current, subsets);
    printSubsets(subsets);

    return 0;
}
