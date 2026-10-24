#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int convert(string date) {
vector<int> days = {31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31};

```
    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));

    for (int i = 0; i < month - 1; i++) {
        day += days[i];
    }

    return day;
}

int countDaysTogether(string arriveAlice, string leaveAlice,
                      string arriveBob, string leaveBob) {
    int start = max(convert(arriveAlice), convert(arriveBob));
    int end = min(convert(leaveAlice), convert(leaveBob));

    if (start > end) {
        return 0;
    }

    return end - start + 1;
}

};

int main() {
Solution sol;
cout << sol.countDaysTogether("08-15", "08-18",
                              "08-16", "08-19") << endl;

cout << sol.countDaysTogether("10-01", "10-31",
                              "11-01", "12-31") << endl;

return 0;


}
