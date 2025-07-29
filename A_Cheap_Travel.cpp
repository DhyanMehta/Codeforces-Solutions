
/**
 *    author:  Dhyan_Mehta
 *    created: 29.07.2025 15:59:35
 **/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define endl '\n'
#define DHYAN ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    DHYAN;

    int m, n, a, b;
    cin >> n >> m >> a >> b;
    int cost1 = n * a;

    int tickets = (n + m - 1) / m;
    int cost2 = tickets * b;

    int full = (n / m);
    int remaining = n % m;
    int cost3 = full * b + remaining * a;

    int cost = min({cost1, cost2, cost3});
    cout << cost << endl;
}