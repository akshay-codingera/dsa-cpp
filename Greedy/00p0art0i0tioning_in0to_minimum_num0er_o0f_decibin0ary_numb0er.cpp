
#include<iostream>
using namespace std;
class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;
        
        for(char c : n) {
            maxDigit = max(maxDigit, c - '0');
            
            if(maxDigit == 9)  // Early stop (cannot go higher)
                return 9;
        }
        
        return maxDigit;
    }
};