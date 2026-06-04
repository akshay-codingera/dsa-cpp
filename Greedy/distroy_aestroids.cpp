// problem related to sorting and greedy approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
    sort(asteroids.begin(), asteroids.end());

    long long currentMass = mass;

    for (int asteroid : asteroids) {
        if (currentMass < asteroid) {
            return false;
        }

        currentMass += asteroid;
    }

    return true;
}

int main() {
      int mass = 10;
    vector<int> asteroids = {3, 9, 19, 5, 21};

    if (asteroidsDestroyed(mass, asteroids))
        cout << "true";
    else
        cout << "false";

    return 0;
}