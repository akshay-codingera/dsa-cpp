#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>

class Solution {
public:
    int firstEvenUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (int num : nums) {
            if (num % 2 == 0 && freq[num] == 1) {
                return num;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 2, 5, 6};
    cout << sol.firstEvenUnique(nums) << endl; // Output: 4
    return 0;
}