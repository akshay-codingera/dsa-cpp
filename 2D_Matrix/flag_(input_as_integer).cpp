#include<bits/stdc++.h>
using namespace std; 
 
int main()
{
    int r,c;
    cin >> r>> c;
    string result ="YES";
    int v[r][c];


    for(int i =0; i<r; i++)
    { 
        for(int j =0; j<c; j++)
        {
            cin >> v[i][j];
        }
    }
    
    for(int i =0; i< r; i++)
    {
        for(int j =1; j< c; j++)
        {
            if(i> 0 && v[i-1][j] != v[i][j])
            { result = "YES";}
            else {result = "NO";}
            if(v[i][j-1] != v[i][j] )
            {
                result = "NO";
            }
            
            
        }
    }
    cout<< result<< endl;
    
    
}