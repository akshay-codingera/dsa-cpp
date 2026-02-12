#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {int count;
       int x = sqrt(n);
       return x;
    }
};

/*
class Solution {
public:
    int bulbSwitch(int n) {int count=0;
       for(int i = 1; i<=n;i++)
       {
         for(int j = 1; j<= i; j++)
         {
             if(i/j==j){count++;continue;}
         }
       }
       return count;
    }
};
*/

/*
class Solution {
public:
    int bulbSwitch(int n) {
        int count = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j * j <= i; j++) {
                if(j * j == i) {
                    count++;
                    break;   // stop checking this i
                }
            }
        }

        return count;
    }
};

*/