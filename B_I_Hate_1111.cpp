
/**
 *    author:  Dhyan_Mehta
 *    created: 16.07.2025 20:51:59
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

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        bool check = false;
        for (int i = 0; i <= x / 111; ++i)
        {
            if ((x - 111 * i) % 11 == 0)
            {
                check = true;
                break;
            }
        }

        cout << (check ? "YES" : "NO") << '\n';
    }
}