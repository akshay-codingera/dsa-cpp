#include<iostream>
#include<vector>
using namespace std;

#include<unordered_map>



class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Step 1: Count frequency
        for (int num : nums) {
            freq[num]++;
        }
        
        int maxLen = 0;
        
        // Step 2: Check harmonious pairs
        for (auto &it : freq) {
            int key = it.first;
            
            if (freq.find(key + 1) != freq.end()) {
                maxLen = max(maxLen, it.second + freq[key + 1]);
            }
        }
        
        return maxLen;
    }
};

