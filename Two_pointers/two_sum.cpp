#include<vector>
using namespace std;

vector<int> twoSumSorted(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target)
            return {left, right};
        else if (sum < target)
            left++;
        else
            right--;
    }

    return {};
}
