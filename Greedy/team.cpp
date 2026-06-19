// codeforces problem

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int count = 0;
    int n;
    cin >> n;
    int problem[n][3];
    for(int i =0; i< n; i++)
    { 
        cin >> problem[i][0];
        cin >> problem[i][1];
        cin >> problem[i][2];


        if((problem[i][0]+ problem[i][1]+ problem[i][2] )  > 1)
        { count++;}
        
    }

    cout << count << endl;
}