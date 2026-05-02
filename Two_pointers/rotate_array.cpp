#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n;

    reverseArray(nums, 0, n - 1);
    reverseArray(nums, 0, k - 1);
    reverseArray(nums, k, n - 1);
}

void printArray(const vector<int>& nums) {
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    rotateArray(nums, k);

    printArray(nums);

    return 0;
}