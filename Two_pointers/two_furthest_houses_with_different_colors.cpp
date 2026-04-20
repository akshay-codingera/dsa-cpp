#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include<limit.h>f


class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        
        int ans = 0;
        
        // Compare with first house
        for (int j = n - 1; j >= 0; j--) {
            if (colors[j] != colors[0]) {
                ans = j;
                break;
            }
        }
        
        // Compare with last house
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                ans = max(ans, n - 1 - i);
                break;
            }
        }
        
        return ans;
    }
};