
/**
 *    author:  Dhyan_Mehta
 *    created: 21.07.2025 21:09:31
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

        int n, m;
        cin >> n >> m;

        if (n == 1 || m == 1 || (n==2 && m==2))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}