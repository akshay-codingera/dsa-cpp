#include <iostream>
#include <climits>
using namespace std;

int myAtoi(string s) {
    int i = 0, n = s.length();
    while (i < n && s[i] == ' ') {
        i++;
    }
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') sign = -1;
        i++;
    }
    long result = 0;
    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';
        if (result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return sign * result;
}

int main() {
    cout << myAtoi("42") << endl;          // 42
    cout << myAtoi("   -042") << endl;     // -42
    cout << myAtoi("1337c0d3") << endl;    // 1337
    cout << myAtoi("0-1") << endl;         // 0
    cout << myAtoi("words and 987") << endl; // 0
    return 0;
}