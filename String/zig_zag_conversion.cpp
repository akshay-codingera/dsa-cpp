#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;

        vector<string> rows(numRows);

        int currRow = 0;
        bool goingDown = false;

        for (int i = 0; i < s.length(); i++) {
            rows[currRow] += s[i];

            // Change direction
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            // Move row pointer
            if (goingDown)
                currRow++;
            else
                currRow--;
        }

        // Combine all rows
        string result = "";
        for (int i = 0; i < numRows; i++) {
            result += rows[i];
        }

        return result;
    }
};

// Driver code
int main() {
    Solution obj;
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << obj.convert(s, numRows);

    return 0;
}