#include <iostream>
using namespace std;

int minOperations(string s) {
    int changeStart0 = 0;
    int changeStart1 = 0;

    for (int i = 0; i < s.length(); i++) {
        // pattern starting with '0' -> 010101...
        if (s[i] != (i % 2 == 0 ? '0' : '1'))
            changeStart0++;

        // pattern starting with '1' -> 101010...
        if (s[i] != (i % 2 == 0 ? '1' : '0'))
            changeStart1++;
    }

    return min(changeStart0, changeStart1);
}

int main() {
    string s;
    cin >> s;

    cout << minOperations(s) << endl;
}