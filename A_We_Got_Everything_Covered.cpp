
/**
 *    author:  Dhyan_Mehta
 *    created: 25.07.2025 20:20:19
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
        int n, k;
        cin >> n >> k;

        string s = "";
        for (int i = 0; i < k; i++)
        {
            s += char('a' + i);
        }

        string a = s;
        string b = s;

        for (int i = 1; i < n; i++)
        {
            b = b.substr(1) + b[0];
            a += b;
        }

        cout << a << endl;
    }
}