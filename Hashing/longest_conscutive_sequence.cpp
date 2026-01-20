#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : s) {
            // start sequence only if num-1 does not exist
            if (s.find(num - 1) == s.end()) {
                int current = num;
                int length = 1;

                while (s.find(current + 1) != s.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
