
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string simplifyPath(string path) {
    vector<string> stack;
    string temp;

    stringstream ss(path);

    while(getline(ss, temp, '/')) {
        if(temp == "" || temp == ".") continue;
        else if(temp == "..") {
            if(!stack.empty()) stack.pop_back();
        } else {
            stack.push_back(temp);
        }
    }

    string result = "/";
    for(int i = 0; i < stack.size(); i++) {
        result += stack[i];
        if(i != stack.size() - 1) result += "/";
    }

    return result;
}

int main() {
    string path = "/a/./b/../../c/";
    cout << simplifyPath(path);
}