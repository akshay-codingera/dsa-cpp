//codeforces 14A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    int minr,minc,maxr,maxc;
    
    cin >> r >> c; // row and column number input ; 
    char ch[r][c];
    minr=r; minc=c; maxr=0; maxc=0;
    for(int i = 0; i< r; i++ )
    { for(int j = 0; j< c; j++)
    { cin >> ch[i][j];}}

    // i need four thing to cut out the artpeice into the smallest possible rectangle for cutting
    // minr;minc; maxr; maxc;
    for(int i = 0; i< r; i++)
    {   
        for(int j = 0; j< c; j++)
        { if(ch[i][j] == '*'){ if(i < minr){minr =i;}
                            if(i>maxr){maxr =i;} 
                            if(j<minc) {minc = j;}
                            if(j>maxc) { maxc =j;}}
        }
    }

    for(int i =minr; i<=maxr; i++)
    {
        for(int j= minc; j<= maxc; j++)
        {
            cout<<ch[i][j]; 
        }
        cout<< endl;
    }

}