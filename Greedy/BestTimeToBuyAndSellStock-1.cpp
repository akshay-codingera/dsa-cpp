#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class BestTimeToBuyAndSellStock_I {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minimum) {
                minimum = price;
            } else {
                maxProfit = max(maxProfit, price - minimum);
            }
        }
        return maxProfit;
    }
};
