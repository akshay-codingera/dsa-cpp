#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (char c : t) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0) {
                return c;
            }
        }

        return ' ';
    }
};

// second method
#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;

        for (char c : s) {
            result ^= c;
        }

        for (char c : t) {
            result ^= c;
        }

        return result;
    }
};
