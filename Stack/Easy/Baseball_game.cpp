#include<iostream>
#include<stack>
#include <string>
#include<vector>
 using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string op : operations) {

            if (op == "C") {
                st.pop();
            }
            else if (op == "D") {
                st.push(2 * st.top());
            }
            else if (op == "+") {
                int a = st.top(); st.pop();
                int b = st.top();
                st.push(a);          // restore
                st.push(a + b);
            }
            else {
                st.push(stoi(op));  // number
            }
        }

        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};
