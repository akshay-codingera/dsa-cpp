#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool ok = false;

        for (int i = 0; i <= 4; i++)
        {
            string temp = s.substr(0, i) + s.substr(n - (4 - i));

            if (temp == "2020")
            {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}