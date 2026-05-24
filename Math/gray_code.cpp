#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> grayCode(int n) {

        vector<int> ans;

        // Total numbers in n-bit Gray Code
        int total = 1 << n;

        for (int i = 0; i < total; i++) {

            // Gray Code Formula
            int gray = i ^ (i >> 1);

            ans.push_back(gray);
        }

        return ans;
    }
};

int main() {

    Solution obj;

    int n;
    cin >> n;

    vector<int> result = obj.grayCode(n);

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}