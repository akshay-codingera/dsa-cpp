#include <iostream>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shifts = 0;

        while (left != right) {
            left >>= 1;
            right >>= 1;
            shifts++;
        }

        return left << shifts;
    }
};

int main() {
    Solution solution;

    int left, right;

    cout << "Enter left and right: ";
    cin >> left >> right;

    int result = solution.rangeBitwiseAnd(left, right);

    cout << "Bitwise AND of the range: " << result << '\n';

    return 0;
}

