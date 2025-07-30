
/**
 *    author:  Dhyan_Mehta
 *    created: 30.07.2025 21:33:21
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

    int x;
    cin >> x;
    int count = 0;
    while (x > 0)
    {
        count += (x & 1);
        x >>= 1;
    }
    cout << count << endl;
}