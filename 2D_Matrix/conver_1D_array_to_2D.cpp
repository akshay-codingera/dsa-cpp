#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Convert 1D Array Into 2D Array

Given a 1D array 'original' and two integers m and n,
create a 2D array with m rows and n columns using elements
from the original array.

If m * n != original.size(), return an empty 2D array.
*/

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

    if (original.size() != m * n)
        return {};

    vector<vector<int>> result(m, vector<int>(n));

    int index = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = original[index++];
        }
    }

    return result;
}

int main() {

    vector<int> original = {1,2,3,4};
    int m = 2, n = 2;

    vector<vector<int>> result = construct2DArray(original, m, n);

    for (auto &row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}