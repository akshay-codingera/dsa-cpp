#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        int tower; 
        cin >> tower; 
        int h[tower];
        for(int i = 0; i< tower; i++)
        {
            cin >> h[i];
        }
        for(int i = 0; i< (tower-1); i++)
        {
            for(int j = i+1; j< tower;j++ )
            {
                if(h[j] > h[i] )
                {h[j] = h[i];}
            }
        }
    int sum = 0;
        for(int i =0; i< tower; i++)
        {
            sum += h[i];
        }

        cout << sum << endl;
    }
}