// codeforces 2230A
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        long long result1, result2, result3;
        int n,a,b; // number of student , cost of individual , cost of a group of 3
        cin >> n >> a >> b;

        result1 = n*a;
        result2 = (n/3)*b + (n%3)*a;
        result3 = ((n+2)/3)*b*1LL;
        
        cout << min({result1, result2, result3})<< endl;

    }
}