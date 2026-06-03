#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long solve(vector<int>& start1, vector<int>& dur1,
                    vector<int>& start2, vector<int>& dur2) {

        int m = start2.size();

        vector<pair<long long, long long>> rides;
        for (int i = 0; i < m; i++) {
            rides.push_back({start2[i], dur2[i]});
        }

        sort(rides.begin(), rides.end());

        vector<long long> prefMinDur(m);
        prefMinDur[0] = rides[0].second;

        for (int i = 1; i < m; i++) {
            prefMinDur[i] = min(prefMinDur[i - 1], rides[i].second);
        }

        vector<long long> suffMinFinish(m);
        suffMinFinish[m - 1] = rides[m - 1].first + rides[m - 1].second;

        for (int i = m - 2; i >= 0; i--) {
            suffMinFinish[i] =
                min(suffMinFinish[i + 1],
                    rides[i].first + rides[i].second);
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < start1.size(); i++) {

            long long finish1 = 1LL * start1[i] + dur1[i];

            int pos = upper_bound(
                rides.begin(),
                rides.end(),
                make_pair(finish1, LLONG_MAX)
            ) - rides.begin();

            // Second ride already open
            if (pos > 0) {
                ans = min(ans,
                          finish1 + prefMinDur[pos - 1]);
            }

            // Need to wait
            if (pos < m) {
                ans = min(ans,
                          suffMinFinish[pos]);
            }
        }

        return ans;
    }

    long long earliestFinishTime(vector<int>& landStartTime,
                                 vector<int>& landDuration,
                                 vector<int>& waterStartTime,
                                 vector<int>& waterDuration) {

        return min(
            solve(landStartTime, landDuration,
                  waterStartTime, waterDuration),

            solve(waterStartTime, waterDuration,
                  landStartTime, landDuration)
        );
    }
};

int main() {
    Solution sol;

    vector<int> landStartTime = {2, 8};
    vector<int> landDuration  = {4, 1};

    vector<int> waterStartTime = {6};
    vector<int> waterDuration  = {3};

    cout << sol.earliestFinishTime(
                landStartTime,
                landDuration,
                waterStartTime,
                waterDuration)
         << endl;

    return 0;
}