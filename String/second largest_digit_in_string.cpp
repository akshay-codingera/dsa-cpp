#include<iostream>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int largest = -1, second = -1;

        for (char c : s) {
            if (isdigit(c)) {
                int d = c - '0';
                if (d > largest) {
                    second = largest;
                    largest = d;
                } else if (d < largest && d > second) {
                    second = d;
                }
            }
        }
        return second;
    }
};
