#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[3] = {0,0,0};
    int count = 0;
    for(int i = 0; i< (int)s.size(); i += 2)
    { freq[s[i]-'1']++ ;
    count++;}
    count--;
    for(int i = 0; i<3; i ++)
    { while(freq[i]--){cout << (i+1);if(count){cout<< '+';}
count--;}}


    
}