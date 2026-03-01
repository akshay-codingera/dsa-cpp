#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
     
            // ways to reach the next state//
        int prev1 = 1; 
        int prev2 = 2;  
        
        for (int i = 3; i <= n; i++) {
            int current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        
        return prev2;
    }
};
