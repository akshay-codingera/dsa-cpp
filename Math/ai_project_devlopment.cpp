#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    int progress1 , progress2; 
int times , time1 ;
    while(testcases--)
    {  times = 0; time1 = 0;
        progress1 = 0 ; progress2 = 0;
        int n, x,y,z; // n is the number of lines of codes; x is the writing speed of 1(x lines perhour); y is the writing speed of 2 (without ai ); z is the setup timeof ai and speed of 2 becomes 10.y after that)
        cin >> n >> x >> y>> z;
        while(n > progress1)
        {  time1++;
            progress1 += x + y;
        }

        while(n > progress2)
        {   times++;
            if(z>1)
            {  if(z >= times)
                {progress2 += x;}
                else {progress2 +=  x+ (y*10);}
            }
            else {if(times > z)
            {progress2 += x + (y*10);}
            else {progress2 += x ;}
            
            }

        }
    cout <<  min(times ,time1) << endl;

    }
    
}


