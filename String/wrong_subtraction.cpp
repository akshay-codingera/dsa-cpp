#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int step;
    cin >> step;
    char result[n];

    while(step--)// correct
    {
        if(s[n-1] == '0'){n--;}
        else {s[n-1] += (-1);};
    }

    for(int i =0; i< n;i++)
    {
        result[i] = s[i];
    }
    result[n] = '\0';

    cout << result<< endl;



}