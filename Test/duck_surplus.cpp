#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n;
        cin >> n;
     
        vector< long long > a(n);
        for(int i = 0; i< n; i++)
        cin >> a[i];

        long long sum = a[n-1];
        long long ans = sum;

        for(int i = n-2; i>= 0; i--)
        {
            if(a[i] <= sum)
            sum += a[i];
            else 
            sum = a[i];

            ans = max(ans, sum);
        }

cout << ans << endl;

    }


}