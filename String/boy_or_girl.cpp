// codeforces 236A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[26]= {};
    for(char ch : s)
    {
        freq[ch - 'a']++;
    }

    int result = 0;
    for(int i = 0; i< 26; i++)
    {
        if(freq[i] > 0)
        result++;
    }

    if(result % 2 == 0)
    {cout <<"CHAT WITH HER!"<< endl; }
    else { cout <<"IGNORE HIM!"<< endl; }
}