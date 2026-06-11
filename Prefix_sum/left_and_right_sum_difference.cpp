#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        vector<int> ans;
        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            ans.push_back(abs(leftSum - rightSum));

            leftSum += nums[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {10, 4, 8, 3};

    Solution obj;
    vector<int> ans = obj.leftRightDifference(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}