#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numberOfSpecialChars(string word) {

    vector<int> firstUpper(26, -1);
    vector<int> lastLower(26, -1);

    for(int i = 0; i < word.size(); i++) {

        char ch = word[i];

        // lowercase letter
        if(ch >= 'a' && ch <= 'z') {
            lastLower[ch - 'a'] = i;
        }

        // uppercase letter
        else if(ch >= 'A' && ch <= 'Z') {

            if(firstUpper[ch - 'A'] == -1) {
                firstUpper[ch - 'A'] = i;
            }
        }
    }

    int count = 0;

    for(int i = 0; i < 26; i++) {

        if(lastLower[i] != -1 &&
           firstUpper[i] != -1 &&
           lastLower[i] < firstUpper[i]) {

            count++;
        }
    }

    return count;
}

int main() {

    string word;

    cout << "Enter string: ";
    cin >> word;

    int ans = numberOfSpecialChars(word);

    cout << "Number of special characters: " << ans << endl;

    return 0;
}