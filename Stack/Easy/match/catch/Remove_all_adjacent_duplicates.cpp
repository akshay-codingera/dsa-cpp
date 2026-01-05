// Pattern: Match / Cancel (Stack)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        // Traverse each character
        for (char ch : s) {
            // If top matches current character → remove (cancel)
            if (!st.empty() && st.top() == ch) {
                st.pop();
            }
            // Otherwise, store character
            else {
                st.push(ch);
            }
        }

        // Build result string from stack
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // Stack gives reversed order
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Result: " << sol.removeDuplicates(s) << endl;
    return 0;
}
