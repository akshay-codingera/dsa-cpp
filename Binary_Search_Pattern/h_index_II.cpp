#include <iostream>
#include <vector>

using namespace std;

int hIndex(vector<int>& citations) {

    int n = citations.size();

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        int h = n - mid;

        if (citations[mid] == h) {
            return h;
        }

        else if (citations[mid] < h) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return n - low;
}

int main() {

    vector<int> citations = {0, 1, 3, 5, 6};

    cout << "H-Index = "
         << hIndex(citations);

    return 0;
}