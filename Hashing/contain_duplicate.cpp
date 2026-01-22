#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int n : nums) {
            if (s.count(n)) return true;
            s.insert(n);
        }
        return false;
    }
};
