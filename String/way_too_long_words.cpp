// codeforces 71A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;

        if((int)s.size() < 11)
        { cout << s<< endl;}
        
        else {int  middle =  (int)s.size() - 2;
            cout << s[0] << middle << s[s.size() -1] << endl;}
    }
}