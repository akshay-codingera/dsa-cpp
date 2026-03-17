#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
        vector<int> count(26, 0);

        // count characters
        for (char c : s) {
            count[c - 'a']++;
        }

        // create key from count
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += to_string(count[i]) + "#";
        }

        mp[key].push_back(s);
    }

    vector<vector<string>> result;
    for (auto &it : mp) {
        result.push_back(it.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    
    vector<vector<string>> res = groupAnagrams(strs);

    for (auto group : res) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
}