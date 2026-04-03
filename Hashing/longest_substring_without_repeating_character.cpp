#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> mp;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        char ch = s[right];

        // If character already seen and inside window
        if (mp.find(ch) != mp.end() && mp[ch] >= left) {
            left = mp[ch] + 1;
        }

        mp[ch] = right; // update index
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}