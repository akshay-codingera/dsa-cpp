#include <bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n = num1.size();
    int m = num2.size();

    vector<int> result(n + m, 0);

    // Multiply from right to left
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {

            int mul = (num1[i] - '0') * (num2[j] - '0');

            int pos1 = i + j;
            int pos2 = i + j + 1;

            int sum = mul + result[pos2];

            result[pos2] = sum % 10;      // store digit
            result[pos1] += sum / 10;     // carry
        }
    }

    // Convert to string
    string ans = "";
    for (int num : result) {
        if (!(ans.empty() && num == 0)) {
            ans += to_string(num);
        }
    }

    return ans.empty() ? "0" : ans;
}

int main() {
    string num1 = "123";
    string num2 = "456";

    cout << multiply(num1, num2);

    return 0;
}