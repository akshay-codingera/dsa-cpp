#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<string, vector<int>> memo;

    vector<int> diffWaysToCompute(string expression) {
        if (memo.count(expression)) return memo[expression];

        vector<int> result;

        for (int i = 0; i < expression.size(); i++) {
            char op = expression[i];

            if (op == '+' || op == '-' || op == '*') {

                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right = diffWaysToCompute(expression.substr(i + 1));

                for (int l : left) {
                    for (int r : right) {
                        if (op == '+') result.push_back(l + r);
                        else if (op == '-') result.push_back(l - r);
                        else result.push_back(l * r);
                    }
                }
            }
        }

        // Base case: number
        if (result.empty()) {
            result.push_back(stoi(expression));
        }

        return memo[expression] = result;
    }
};