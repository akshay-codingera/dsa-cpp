#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    vector<vector<int>> ans;

    void solve(vector<int>& nums,
               vector<int>& temp,
               vector<bool>& visited)
    {
        // Base case
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            // already used
            if(visited[i])
                continue;

            // skip duplicates
            if(i > 0 &&
               nums[i] == nums[i - 1] &&
               !visited[i - 1])
            {
                continue;
            }

            // choose
            visited[i] = true;
            temp.push_back(nums[i]);

            // recurse
            solve(nums, temp, visited);

            // backtrack
            temp.pop_back();
            visited[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> temp;
        vector<bool> visited(nums.size(), false);

        solve(nums, temp, visited);

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 1, 2};

    vector<vector<int>> result = obj.permuteUnique(nums);

    cout << "Unique Permutations:\n";

    for(auto v : result)
    {
        for(int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}