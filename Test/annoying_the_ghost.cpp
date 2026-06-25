#include<bits/stdc++.h>
using namespace std; 

int doswap(int a[], int pos, int target)
{
    int count  =0; 
    while(target >pos)
    {
        swap(a[target], a[target-1]);
        target--;
        count++;
    }

    return count;
}


int main()
{
    int t; 
    cin >> t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n],b[n];

        for(int i =0; i< n; i++)
        { cin >> a[i];}
        for(int j =0; j< n; j++)
        { cin >> b[j];}


        int ans =0;

        for(int i =0; i< n; i++)
        { if(a[i]<=b[i])
        continue;
        int j = j+1;
        while(j< n && a[j]>b[i])
        {
            j++;
        }
        if(j==n)
        {cout << -1<< endl;
        return 0;}
    

    ans += doswap(a,i,j);
    }
    cout << ans<< endl;

}
}