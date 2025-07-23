
/**
 *    author:  Dhyan_Mehta
 *    created: 23.07.2025 22:08:00
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x += arr[i] - 1;
        }
        if ((x & 1) == 1)
        {
            cout << "errorgorn" << endl;
        }
        else
            cout << "maomao90" << endl;
    }
}