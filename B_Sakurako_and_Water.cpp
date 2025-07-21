
/**
 *    author:  Dhyan_Mehta
 *    created: 21.07.2025 21:13:05
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
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];

        int total_ops = 0;

        for (int k = -(n - 1); k <= n - 1; ++k)
        {
            int min_val = 0;

            for (int i = 0; i < n; ++i)
            {
                int j = i - k;
                if (j >= 0 && j < n)
                    min_val = min(min_val, a[i][j]);
            }

            if (min_val < 0)
                total_ops += -min_val;
        }

        cout << total_ops << "\n";
    }
}