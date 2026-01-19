#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<functional>

using namespace std;
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        
        // Pair each car's position with its time to reach target
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // Sort cars by position descending (closest to target first)
        sort(cars.begin(), cars.end(), greater<>());

        stack<double> st;

        for (auto &car : cars) {
            double time = car.second;

            // New fleet only if time is greater than top of stack
            if (st.empty() || time > st.top()) {
                st.push(time);
            }
            // else: merges into the fleet ahead (do nothing)
        }

        return st.size();
    }
};