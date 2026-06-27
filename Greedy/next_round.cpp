// codeforces 158A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;// number of input 
    int threshold;
    cin >> threshold;
    threshold += -1;
    int count = 0;

    int number[n+1];
    for(int i = 0; i< n;i++)
    { cin >> number[i];}
    number[n] = 0;
    for(int i =0; i< n; i++)
    {
        if((number[i] >= number[threshold]) && (number[i+1] <= number[i])  )
        {if(number[i]!=0) {count ++;}}
    }
    cout << count<< endl;

}