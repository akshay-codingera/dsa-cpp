// codeforces 617A 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x; 
    cin >> x; // x is the distance 
    int result = 0;

    int laststep = x % 5;
    int initialstep = (x/5);

    if(laststep == 0)
    {
        result += 0;
    }
    else {result += 1;}

    cout << result + initialstep<< endl;

}