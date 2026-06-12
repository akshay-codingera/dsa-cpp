#include<bits/stdc++.h>
using namespace std;


void check(int arr[], int number)
{  //   if(number == 2) cout << arr[0] << " " << arr[1]<< endl;return ; // this return will prevent you to go into the loop below
bool okay = true;
    for(int i = 2; i< number; i++)
{
//     if(arr[i]!= (arr[i-2]%arr[i-1])) {cout<< -1<< endl;break;}
//    else { cout<< arr[i-2] << " "<<arr[i-1]<<endl; break;}

if(arr[i] != (arr[i-2] % arr[i-1] )){ okay= false; break;}


}

if(okay)
{cout << arr[0] << " " << arr[1]<< endl; }
else {cout << -1 << endl;}
    
}


int main()
{
int testcases;
cin >> testcases;
int initiate =0;
while(initiate < testcases)
{
    int number;
    cin >> number;
    
    int arr[number];
    for(int i = 0; i< number; i++)
    {cin >> arr[i];}
if(number < 2){cout << -1<< endl ; initiate++ ; continue;}
   //  sort(arr.begin(), arr.end() , greater<int>()); this works with the vector
   sort(arr, arr + number , greater<int>());
    
    check(arr, number);
    
    initiate++;
}
}