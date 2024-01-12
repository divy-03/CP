#include <bits/stdc++.h>
using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& current, int index, vector<vector<int>>& subsets) {
    if (index == nums.size()) {
        subsets.push_back(current); // Add the current subset to the result
        return;
    }

    // Include the current element in the subset
    current.push_back(nums[index]);
    generateSubsets(nums, current, index + 1, subsets);

    // Exclude the current element from the subset
    current.pop_back();
    generateSubsets(nums, current, index + 1, subsets);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets;

    vector<int> current; // To store the current subset

    generateSubsets(nums, current, 0, subsets);

    // Print the subsets
    for (const vector<int>& subset : subsets) {
        for (int num : subset) {
            cout << num << " "; 
        }
        cout << endl;
    }

    return 0;
}

