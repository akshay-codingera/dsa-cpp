// codeforces 112A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 , s2;
    cin >> s1 >> s2;
   string S1,S2 = "";

    for(char ch : s1)
    { S1 += tolower(ch) ;}
    for(char ch : s2)
    { S2 += tolower(ch) ;}

    if(S1 == S2) {cout << 0 << "\n";}
  else if(S1 > S2) {cout << 1 << "\n";}
  else if(S1 < S2) {cout << -1 << "\n";}

}