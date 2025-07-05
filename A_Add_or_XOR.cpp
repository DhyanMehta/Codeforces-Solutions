/**
 *    author:  Dhyan_Mehta
 *    created: 05.07.2025 22:55:20
**/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define endl '\n'
#define DHYAN ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    DHYAN;

    int t;
    cin >> t;

    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        else if (a < b) {
            int cost = 0;
            while (a < b) {
                if (a % 2 == 0 && a + 1 <= b && y < x) {
                    a ^= 1;
                    cost += y;
                } else {
                    a += 1;
                    cost += x;
                }
            }
            cout << cost << endl;
            continue;
        }

        else {
            int cost = 0;
            bool possible = true;
            while (a > b) {
                if (a % 2 == 1) {
                    a ^= 1;
                    cost += y;
                } else {
                    possible = false;
                    break;
                }
            }
            if (possible && a == b)
                cout << cost << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
