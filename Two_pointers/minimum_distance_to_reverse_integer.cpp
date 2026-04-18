#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
       int original = n;
        long long reverse = 0;
        while(n>0)
            {
                int digit = n%10;
                reverse = reverse *10+ digit;
                n=n/10;
            }
            return abs(original - reverse );
    }
};