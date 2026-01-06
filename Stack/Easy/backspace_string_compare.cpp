#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result1 = "";
        string result2 = "";
        stack<char> st1;
        stack<char> st2;
        for(char c : s)
        {    if( c == '#')
        {
            if(!st1.empty() )
            {
                st1.pop();
            } else { result1 += "";}
        }
        else 
        {
            st1.push(c);
        }
        }
        int b = st1.size();
        for(int i = 0; i<b; i++)
        {
           result1 += st1.top();
           st1.pop();
        }

        for(char c : t)
        {    if( c == '#')
        {
            if(!st2.empty() )
            {
                st2.pop();
            } else { result2 += "";}
        }
        else 
        {
            st2.push(c);
        }
        }
        int d = st2.size();
        for(int i = 0; i<d; i++)
        {
           result2 += st2.top();
           st2.pop();
        }
  // i didnot reveresed the strings as if they were resulting into the same string both will work in the same manner 
        return (result1 == result2);

    }
};
// one thing to remember while doing this kind of questions keep in mind donot use st.size() as the condition because it changes with every step or pop and beyond this try to use while loop instead of the for 