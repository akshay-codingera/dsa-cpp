#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> arr;
        
        for(int i=0;i<n;i++)
            arr.push_back({score[i], i});
        
        sort(arr.rbegin(), arr.rend());
        
        vector<string> res(n);
        
        for(int i=0;i<n;i++){
            int idx = arr[i].second;
            
            if(i==0) res[idx] = "Gold Medal";
            else if(i==1) res[idx] = "Silver Medal";
            else if(i==2) res[idx] = "Bronze Medal";
            else res[idx] = to_string(i+1);
        }
        
        return res;
    }
};