// unoptimized solution 
#include<iostream>
using namespace std; 
#include<vector>
#include<algorithm>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int result = -1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i< n; i++)
        {
            if(nums[i] != i)
        {result = i; break;}
        
        if(nums[n-1] != n) return n; }
        return result;
    }
};