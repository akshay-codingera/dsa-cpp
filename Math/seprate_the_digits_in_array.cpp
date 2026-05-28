#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> separateDigits(vector<int>& nums)
{
    vector<int> ans;

    for (int num : nums)
    {
        vector<int> temp;

        // Extract digits
        while (num > 0)
        {
            temp.push_back(num % 10);
            num /= 10;
        }

        // Digits are reversed, so fix order
        reverse(temp.begin(), temp.end());

        // Add digits to final array
        for (int digit : temp)
        {
            ans.push_back(digit);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {123, 45, 9};

    vector<int> result = separateDigits(nums);

    cout << "Separated Digits : ";

    for (int digit : result)
    {
        cout << digit << " ";
    }

    return 0;
}