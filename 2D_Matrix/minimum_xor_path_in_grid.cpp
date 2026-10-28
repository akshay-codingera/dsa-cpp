#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<array<bool, 1024>> dp(n);

        for (auto& row : dp) {
            row.fill(false);
        }

        array<bool, 1024> next{};

        dp[0][grid[0][0]] = true;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    continue;
                }

                int value = grid[i][j];
                next.fill(false);

                for (int k = 0; k < 1024; k++) {
                    // From the top
                    if (i > 0 && dp[j][k]) {
                        next[k ^ value] = true;
                    }

                    // From the left
                    if (j > 0 && dp[j - 1][k]) {
                        next[k ^ value] = true;
                    }
                }

                dp[j] = next;
            }
        }

        for (int k = 0; k < 1024; k++) {
            if (dp[n - 1][k]) {
                return k;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cout << sol.minCost(grid) << '\n';

    return 0;
}