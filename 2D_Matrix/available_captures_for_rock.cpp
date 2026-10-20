#include <vector>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r = 0, c = 0;

        // Step 1: Find the rook
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'R') {
                    r = i;
                    c = j;
                }
            }
        }

        // Up, Down, Left, Right
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int count = 0;

        // Step 2: Explore all four directions
        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d];
            int nc = c + dc[d];

            while (nr >= 0 && nr < 8 && nc >= 0 && nc < 8) {
                if (board[nr][nc] == 'B') {
                    break;
                }

                if (board[nr][nc] == 'p') {
                    count++;
                    break;
                }

                nr += dr[d];
                nc += dc[d];
            }
        }

        return count;
    }
};