#include<bits/stdc++.h>
using namespace std; 

int main()
{
    
    string result = "YES";
    char ch[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> ch[i][j];
        }
    }

    for(int i = 0; i< 3; i++)
    { for(int j = 0; j< 3; j++)
    { if(ch[i][j] == 'X')
    {if(ch[1+(1-i)][1+(1-j )] != 'X')  //  [1][1] - [0][1] ==check ([1][1] +[1][0])   1,1 ++ (1-i)(1-j)
    {result = "NO";}}}}

    cout << result<< endl;

}