#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin >> l;
    string stone = "";
    // CIN WILL BE A STRING NOT DIFFERENT CHARACTERS 
    cin >> stone;


int count = 0; 
    for(int i = 1; i<l; i++)
    { if(stone[i-1] == stone[i]) 
{  count ++;} }
    cout << count << endl;


}