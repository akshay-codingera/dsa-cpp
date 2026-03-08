#include<unordered_set>
using namespace std;
#include<iostream>

class Solution {
public: 

     int getnext(int n)

     { 
        int sum = 0;
        while(n>0){
        int digit = n%10;
        int sum = sum+ digit*digit;
        n = n/10;
     }
        return sum;
     }

    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.count(n) == 0 )
        {
            seen.insert(n); // push back donot work here it work for the vector
            n= getnext(n);
        }

        return (n == 1);
        
    }
};