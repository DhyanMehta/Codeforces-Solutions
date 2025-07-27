
/**
 *    author:  Dhyan_Mehta
 *    created: 27.07.2025 19:33:24
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int count = 0;
        int i = 0;

        while (i <= n - k)
        {
            bool good_weather = true;
            for (int j = 0; j < k; ++j)
            {
                if (arr[i + j] == 1)
                {
                    good_weather = false;
                    break;
                }
            }
            if (good_weather)
            {
                count++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }

        cout << count << '\n';
    }
}