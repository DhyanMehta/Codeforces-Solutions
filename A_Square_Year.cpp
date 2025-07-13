
/**
 *    author:  Dhyan_Mehta
 *    created: 13.07.2025 22:15:00
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
        int n;
        cin >> n;
        int num = sqrt(n);
        if (num * num == n)
        {
            cout << 0 << " " << num << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}