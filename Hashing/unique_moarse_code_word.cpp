#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };

        unordered_set<string> uniqueCodes;

        for (string word : words) {
            string transformation = "";

            for (char c : word) {
                transformation += morse[c - 'a'];
            }

            uniqueCodes.insert(transformation);
        }

        return uniqueCodes.size();
    }
};