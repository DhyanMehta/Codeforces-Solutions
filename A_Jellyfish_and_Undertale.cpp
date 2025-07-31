
/**
 *    author:  Dhyan_Mehta
 *    created: 31.07.2025 12:22:10
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
        int a, b, n;
        cin >> a >> b >> n;
        ll ans = b;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += min(a - 1, arr[i]);
        }
        cout << ans << endl;
    }
}