#include<bits/stdc++.h>
using namespace std;




void solve()
{
int n;
long long c;
if(!(cin >> n>> c)) return;


vector<long long > a(n),b(n);
for(int i = 0; i<n; i++){cin >> a[i];}
for(int i = 0; i<n; i++){cin >> a[i];}


bool possible_no_reorder = true;
long long cost_no_reorder = 0;

for(int i = 0; i<n; ++i)
{
    if(a[i] < b[i])
    {
        possible_no_reorder  = false;
        break;

    }
    cost_no_reorder += (a[i] - b[i]);
}


vector<long long > a_sorted = a;
vector<long long > b_sorted = b;
sort(a_sorted.begin() , a_sorted.end());
sort(b_sorted.begin() , b_sorted.end());

bool possible_with_reorder = true;
long long cost_with_reorder = c;
for(int i = 0; i <n; ++i)
{
    if(a_sorted[i] < b_sorted[i])
    {possible_with_reorder = false;
    break;}

cost_with_reorder += (a_sorted[i] - b_sorted[i]);
    }

    if(possible_no_reorder && possible_with_reorder)
    { cout << min(cost_no_reorder,cost_with_reorder) << "\n";}
    else if(possible_no_reorder)
    {cout << cost_no_reorder << "\n";}
    else if(possible_with_reorder)
    {cout << cost_with_reorder<< "\n";}
    else { cout << -1 << "\n";}


}






int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        solve();
    }
    return 0;
}