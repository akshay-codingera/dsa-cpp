#include <vector>
#include <algorithm>
using namespace std;

class MaximumProductSubarray {
public:
    int maxProduct(vector<int>& nums) {
        int maxp = nums[0];
        int minp = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int current = nums[i];

            if (current < 0) {
                swap(maxp, minp);
            }

            maxp = max(current, maxp * current);
            minp = min(current, minp * current);

            result = max(result, maxp);
        }
        return result;
    }
};
