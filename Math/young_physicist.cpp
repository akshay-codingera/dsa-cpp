// we can have a easier approch and do everything easier without even storing and all as vector1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int total_forces;
    cin >> total_forces;

    int x = 0, y = 0, z = 0;

    while(total_forces--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        x += a;
        y += b;
        z += c;
    }

    cout << ((x == 0 && y == 0 && z == 0) ? "YES" : "NO");
}