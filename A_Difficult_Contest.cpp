
/**
 *    author:  Dhyan_Mehta
 *    created: 22.07.2025 22:44:58
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

        string s;
        cin >> s;
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}