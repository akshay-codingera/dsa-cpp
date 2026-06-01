#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& cost) {
    sort(cost.begin(),cost.end());  int i;
    int result_cost=0;
    int n=cost.size();
     //  if(n<2){return cost[n-1];}  we donot require this condition because we have modified inside the for loop 
    for(i=n-1;i>=0;i-=3)
    {
    result_cost += cost[i];
    if((i-1)>=0)
    {
            result_cost += cost[i-1];
    }
    } 
    return result_cost;
    }
};


int main()
{
    Solution s;
    vector<int> cost={1,2,3,5,6,4};
    cout<<s.minimumCost(cost);
    return 0;
}