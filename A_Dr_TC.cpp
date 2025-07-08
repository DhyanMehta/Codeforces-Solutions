
/**
 *    author:  Dhyan_Mehta
 *    created: 08.07.2025 09:35:40
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
        string s;
        cin >> s;
        int one = 0;
        for (char c : s)
        {
            if (c == '1')
                one++;
        }
        int no_one = (n - 1) * one + (n - one);
        cout << no_one << endl;
    }
}