#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:

    static bool compare(string a, string b)
    {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums)
    {
        vector<string> arr;

        for (int num : nums)
        {
            arr.push_back(to_string(num));
        }

        sort(arr.begin(), arr.end(), compare);

        // Handle case like [0,0]
        if (arr[0] == "0")
        {
            return "0";
        }

        string result = "";

        // Join all strings
        for (string s : arr)
        {
            result += s;
        }

        return result;
    }
};