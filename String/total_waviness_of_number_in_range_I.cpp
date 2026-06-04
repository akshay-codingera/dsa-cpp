#include <iostream>
#include <string>
using namespace std;

int waviness(int num) {
    string s = to_string(num);

    if (s.size() < 3)
        return 0;

    int count = 0;

    for (int i = 1; i < s.size() - 1; i++) {
        bool peak =
            (s[i] > s[i - 1]) &&
            (s[i] > s[i + 1]);

        bool valley =
            (s[i] < s[i - 1]) &&
            (s[i] < s[i + 1]);

        if (peak || valley)
            count++;
    }

    return count;
}

int totalWaviness(int num1, int num2) {
    int answer = 0;

    for (int num = num1; num <= num2; num++) {
        answer += waviness(num);
    }

    return answer;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << totalWaviness(num1, num2);

    return 0;
}