#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>> n;
    int count_ge_3= 0;
    int count_ge_2 = 0;

    for(int i = 0 ; i < n; i++)
    {
        long long c ; 
        cin >> c;
        if(c>= 3)
        {count_ge_3++;}
        if(c>= 2)
        {count_ge_2++;}
    }

    if(count_ge_3 >=1 || count_ge_2 >= 2)
    {cout << "yes\n";}
    else {cout << "no\n";}
}

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
solution();
        }

    }