#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int digitSum(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int minElement(vector<int>& nums)
{
    int mini = INT_MAX;

    for (int num : nums)
    {
        mini = min(mini, digitSum(num));
    }

    return mini;
}

int main()
{
    vector<int> nums = {999, 19, 199};

    cout << "Minimum Element After Replacement With Digit Sum: "
         << minElement(nums) << endl;

    return 0;
}