#include<iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length())
            return false;
    std::    string temp = s + s;

        return temp.find(goal) != string::npos;
    }
};
