#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long s;
        cin >> s;
        long long result;
        long long a[s],b[s];
        
        for(int i = 0; i< s; i++)
        {
            cin >> a[i];
        }
        for(int i =0; i< s; i++)
        {
            cin >> b[i];
        }
        long long max = INT_MIN;
        long long sum = 0;
        
        
        for(int i = 0; i< s; i++)
        {
            if(a[i] > b[i]){swap(a[i], b[i]);}


            if(a[i] > max) { max = a[i];}

            sum += b[i];
            
        }
        result = sum + max;
        
        cout << result << endl;
    }
}