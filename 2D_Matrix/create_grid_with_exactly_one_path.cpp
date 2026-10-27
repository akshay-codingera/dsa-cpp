#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
vector<string> createGrid(int m, int n) {
vector<string> grid(m, string(n, '#'));


    // Make the first row free
    for (int j = 0; j < n; j++) {
        grid[0][j] = '.';
    }

    // Make the last column free
    for (int i = 0; i < m; i++) {
        grid[i][n - 1] = '.';
    }

    return grid;
}


};

int main() {
int m, n;


cout << "Enter the number of rows and columns: ";
cin >> m >> n;

// Validate input
if (m < 1 || m > 25 || n < 1 || n > 25) {
    cout << "Invalid input! m and n must be between 1 and 25.\n";
    return 1;
}

Solution solution;
vector<string> grid = solution.createGrid(m, n);

cout << "\nConstructed Grid:\n";

for (const string& row : grid) {
    cout << row << '\n';
}

return 0;


}
