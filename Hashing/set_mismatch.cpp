#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int n = nums.size();
        
        for(int num : nums){
            mp[num]++;
        }
        
        int duplicate = -1;
        int missing = -1;
        
        for(int i=1;i<=n;i++){
            if(mp[i] == 2)
                duplicate = i;
            if(mp[i] == 0)
                missing = i;
        }
        
        return {duplicate, missing};
    }
};

/*
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = -1, missing = -1;
        
        for(int i=0;i<nums.size();i++){
            int index = abs(nums[i]) - 1;
            
            if(nums[index] < 0)
                duplicate = abs(nums[i]);
            else
                nums[index] = -nums[index];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0)
                missing = i + 1;
        }
        
        return {duplicate, missing};
    }
};
*/