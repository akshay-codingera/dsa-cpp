#include<bits/stdc++.h>
using namespace std;

bool is_good(long long num)
{
    string s = to_string(num);
    unordered_set<char> distinct_digits(s.begin() ,s.end());
    return distinct_digits.size() <=2;
}

void solve()
{
    long long x;
    cin >> x;
    vector<int> choices = {2,10};
    string s = to_string(x);
    for(char ch : s)
    {
        int digit = ch - '0';
        if(digit >= 2)
        {
            choices.push_back(digit);
            choices.push_back(digit * 11);
        }
    }

    for(int i = 3; i<= 30; ++i)
    {
        if(is_good(i)) {
        choices.push_back(i);}
    }

    for(long long y : choices)
    {
        if (is_good(x*y))
        {
            cout << y << "\n";
            return;
        }
    }

}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
  solve();
    }
}