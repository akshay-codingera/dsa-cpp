#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int l = k, r = k;
        int currMin = nums[k];
        int ans = nums[k];

        while (l > 0 || r < n - 1) {
            // decide direction
            if (l == 0) {
                r++;
            } else if (r == n - 1) {
                l--;
            } else if (nums[l - 1] > nums[r + 1]) {
                l--;
            } else {
                r++;
            }

            currMin = min(currMin, min(nums[l], nums[r]));
            ans = max(ans, currMin * (r - l + 1));
        }

        return ans;
    }
};
