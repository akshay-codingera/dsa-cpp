#include <iostream>
#include <climits>
using namespace std;

int myAtoi(string s) {
    int i = 0, n = s.length();

    // 1. Skip spaces
    while (i < n && s[i] == ' ') {
        i++;
    }

    // 2. Handle sign
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') sign = -1;
        i++;
    }

    // 3. Convert digits
    long long result = 0;  // 🔥 FIXED

    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';

        // 4. Handle overflow BEFORE it happens
        if (result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    // 5. Apply sign safely
    result *= sign;

    // 6. Clamp just in case (extra safety)
    if (result > INT_MAX) return INT_MAX;
    if (result < INT_MIN) return INT_MIN;

    return (int)result;
}

int main() {
    cout << myAtoi("42") << endl;          // 42
    cout << myAtoi("   -042") << endl;     // -42
    cout << myAtoi("1337c0d3") << endl;    // 1337
    cout << myAtoi("0-1") << endl;         // 0
    cout << myAtoi("words and 987") << endl; // 0
    return 0;
}