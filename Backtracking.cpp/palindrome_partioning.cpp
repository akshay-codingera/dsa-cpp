// majorly a string

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Function to check palindrome
    bool isPalindrome(string &s, int left, int right) {

        while (left < right) {

            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    // Backtracking function
    void solve(int index,
               string &s,
               vector<string> &path,
               vector<vector<string>> &ans) {

        // Base Case
        if (index == s.size()) {
            ans.push_back(path);
            return;
        }

        // Try all possible partitions
        for (int i = index; i < s.size(); i++) {

            // Check palindrome
            if (isPalindrome(s, index, i)) {

                // Take substring
                path.push_back(s.substr(index, i - index + 1));

                // Recursive call
                solve(i + 1, s, path, ans);

                // Backtrack
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> path;

        solve(0, s, path, ans);

        return ans;
    }
};

int main() {

    Solution obj;

    string s = "aab";

    vector<vector<string>> result = obj.partition(s);

    // Print answer
    for (auto partition : result) {

        cout << "[ ";

        for (auto str : partition) {
            cout << str << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}