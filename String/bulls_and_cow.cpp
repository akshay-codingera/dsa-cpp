#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getHint(string secret, string guess) {
    int bulls = 0, cows = 0;

    vector<int> secretFreq(10, 0);
    vector<int> guessFreq(10, 0);

    for (int i = 0; i < secret.size(); i++) {
        if (secret[i] == guess[i]) {
            bulls++;
        } else {
            secretFreq[secret[i] - '0']++;
            guessFreq[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cows += min(secretFreq[i], guessFreq[i]);
    }

    return to_string(bulls) + "A" + to_string(cows) + "B";
}

int main() {
    string secret = "1807";
    string guess = "7810";

    cout << getHint(secret, guess) << endl;

    return 0;
}