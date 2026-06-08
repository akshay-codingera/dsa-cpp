#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int bit = 0; bit < 32; bit++) {
            int count = 0;

            for (int num : nums) {
                if ((num >> bit) & 1) {
                    count++;
                }
            }

            if (count % 3 != 0) {
                result |= (1 << bit);
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums = {2, 2, 3, 2};

    Solution obj;
    cout << obj.singleNumber(nums);

    return 0;
}
