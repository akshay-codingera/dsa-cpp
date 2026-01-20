#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> result;

        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            if (!st.count(i)) {
                result.push_back(i);
            }
        }

        return result;
    }
};
