#include<bits/stdc++.h>
using namespace std;

const int MAZN = 200005;
long long pairs_with_gcd[MAZN];
long long divisor_count[MAZN];


void precompute_divisor()
{
    for(int i = 1; i< MAZN; i++)
    {
        for(int j = i; j< MAZN; j += i)
        {
            divisor_count[j]++;
        }
    }
}

void solve()
{

    long long n;
    cin >> n;

    for(int i = n; i>0; i--)
    {
        long long multiples = n/i;
        pairs_with_gcd[i] = multiples * multiples;
        for(int j = 2*i ; j <=n; j+=i)
        {
            pairs_with_gcd[i] -= pairs_with_gcd[j] ;
        }
    }


    long long total_triplet = 0;
    for(int i = 1; i <= n; i++)
    { total_triplet += pairs_with_gcd[i] * divisor_count[i];}

    cout << total_triplet << "\n";
}




int main()
{

    precompute_divisor();
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}












// long long gcd(long long a, long long b)
// {
// return b == 0? a: gcd(b, a%b);
// }

// long long lcm(long long a , long long b)
// {
//     if(a == 0|| b== 0){return 0;}
//     return (a/ gcd(a,b))*b;
// }


// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;

        
//         int count = 0;

//         for(int i = n; i> 0; i--)
//         { for(int j = n; j>0; j--)
//         {  for(int k = n; k>0; k--)
//             {
//                 if(gcd(lcm(i,j),lcm(j,k)) == gcd(i ,k))
//                 { count++;}
//             }
//         }}
//         cout << count << '\n';


//     }
// }