// @ also belongs to the greedy 

#include <bits/stdc++.h>
using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end(), greater<int>());

    int h = 0;
    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] >= i + 1) {
            h = i + 1;
        } else {
            break;
        }
    }
    return h;
}

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << hIndex(citations);
    return 0;
}