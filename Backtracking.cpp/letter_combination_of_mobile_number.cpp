#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Mapping of digits to letters
vector<string> keypad = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

// Recursive function
void solve(string digits, int index, string current, vector<string> &result) {
    if (index == digits.length()) {
        result.push_back(current);
        return;
    }

    string letters = keypad[digits[index] - '0'];

    for (int i = 0; i < letters.length(); i++) {
        solve(digits, index + 1, current + letters[i], result);
    }
}

int main() {
    string digits;
    cout << "Enter phone number (digits 2-9): ";
    cin >> digits;

    vector<string> result;

    if (digits.length() == 0) {
        cout << "No combinations\n";
        return 0;
    }

    solve(digits, 0, "", result);

    cout << "\nPossible combinations:\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}