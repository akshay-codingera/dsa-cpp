
// #include<vector>
// #include<iostream>
// #include<map>
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> freq;

//         for (int x : nums) {
//             freq[x]++;
//         }

//         for (auto it : freq) {
//             if (it.second == 1) {
//                 return it.first;
//             }
//         }

//         return -1; // safety (never reached)
//     }
// };


// while using a trick to do this  ( when condition is given that every number comes exactly twice except one )
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }
        return ans;
    }
};

