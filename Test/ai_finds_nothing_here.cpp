#include<iostream>
using namespace std;

long long power(long long base , long long exp, long long mod)
{
    long long res = 1;
    base %= mod;
    
    while(exp > 0)
    {if(exp % 2 == 1)
    {res = ((__int128)res * base) % mod;}
    base = ((__int128)base *base) %mod;
    exp /= 2;
    }
    return res;

}

void solve()
{
    long long n,m,r,c;
    cin >> n>> m>> r>> c;

    long long MOD = 998244353;

    long long free_variables = n*(c-1) + m*(r-1)-(r-1)*(c-1);
    long long ans = power(2, free_variables, MOD);

    cout << ans << "\n";
}

int main()
{

    int t; 
    cin >> t; 
    while(t--)
    { solve();}
    return 0;
}