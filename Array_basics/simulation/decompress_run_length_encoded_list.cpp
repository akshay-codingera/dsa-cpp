#include <iostream>
#include <vector>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
vector<int> ans;


for (int i = 0; i < nums.size(); i += 2) {
    int freq = nums[i];
    int val = nums[i + 1];

    for (int j = 0; j < freq; j++) {
        ans.push_back(val);
    }
}

return ans;


}

int main() {
int n;
cout << "Enter the size of the array (even number): ";
cin >> n;


if (n < 2 || n % 2 != 0) {
    cout << "Invalid array size. Enter an even number >= 2.\n";
    return 1;
}

vector<int> nums(n);

cout << "Enter the array elements (frequency, value pairs): ";
for (int i = 0; i < n; i++) {
    cin >> nums[i];
}

vector<int> result = decompressRLElist(nums);

cout << "Decompressed array: [";
for (int i = 0; i < result.size(); i++) {
    cout << result[i];

    if (i < result.size() - 1) {
        cout << ", ";
    }
}
cout << "]\n";

return 0;


}
