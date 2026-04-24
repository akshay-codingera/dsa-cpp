#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int furthestDistanceFromOrigin(string moves) {
    int left = 0, right = 0, blank = 0;

    for (char c : moves) {
        if (c == 'L') left++;
        else if (c == 'R') right++;
        else blank++;
    }

    int position = right - left;

    return abs(position) + blank;
}

int main() {
    string moves;

    cout << "Enter moves string (L, R, _): ";
    cin >> moves;

    int result = furthestDistanceFromOrigin(moves);

    cout << "Furthest Distance from Origin: " << result << endl;

    return 0;
}