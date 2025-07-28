
/**
 *    author:  Dhyan_Mehta
 *    created: 28.07.2025 22:00:56
 **/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define endl '\n'
#define DHYAN ios::sync_with_stdio(false), cin.tie(nullptr)

bool canReachExit(int n, int x, const vector<int> doors)
{
    for (int start = 0; start <= n; ++start)
    {
        int time = 0;
        bool usedButton = false;
        bool success = true;

        for (int i = 0; i < n; ++i)
        {
            if (doors[i] == 0)
            {
                time++;
            }
            else
            {
                if (!usedButton)
                {
                    if (n - i <= x)
                    {
                        usedButton = true;
                        time++;
                    }
                    else
                    {
                        success = false;
                        break;
                    }
                }
                else
                {
                    if (time - start < x)
                    {
                        time++;
                    }
                    else
                    {
                        success = false;
                        break;
                    }
                }
            }
        }

        if (success)
            return true;
    }
    return false;
}

int main()
{
    DHYAN;

    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; ++i)
            cin >> doors[i];

        bool possible = false;

        for (int pressTime = 0; pressTime <= n; pressTime++)
        {
            bool ok = true;
            int time = 0;
            for (int i = 0; i < n; ++i)
            {
                if (doors[i] == 0)
                {
                    time++;
                }
                else
                {
                    if (time >= pressTime && time < pressTime + x)
                    {
                        time++;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}