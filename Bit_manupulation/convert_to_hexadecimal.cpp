#include<iostream>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        string hex = "0123456789abcdef";
        string result = "";
        
        while (num != 0 && result.size() < 8) {
            result = hex[num & 15] + result;
            num >>= 4;
        }
        
        return result;
    }
};
