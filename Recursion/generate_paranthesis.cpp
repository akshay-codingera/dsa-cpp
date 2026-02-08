#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }

private:
    void backtrack(vector<string>& result, string curr, int open, int close, int n) {
        // Base case: completed string
        if (curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }

        // Add '(' if we still can
        if (open < n) {
            backtrack(result, curr + "(", open + 1, close, n);
        }

        // Add ')' if it keeps the string valid
        if (close < open) {
            backtrack(result, curr + ")", open, close + 1, n);
        }
    }
};