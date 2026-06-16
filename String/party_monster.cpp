#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t; // number of testcases
    int arr[2] ;
    
    while(t--)
    { int arr[2] = {0,0};
        int n;
        cin >> n;
        char ch[n];
        for(int i= 0; i< n; i++)
        {
            cin >> ch[i];
        }
        for(int i =0; i< n; i++)
        {
            if(ch[i] == '('){arr[0]++;}
            else if(ch[i] ==')') { arr[1]++;}
            else {continue;}
        }
        
        if(arr[0]== arr[1] )
        {cout << "YES"<< endl;}
        else {cout << "NO"<< endl;}
        
    }
    
}