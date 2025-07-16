
/**
 *    author:  Dhyan_Mehta
 *    created: 16.07.2025 20:42:45
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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        vector<int> v = {x1, x2, x3};
        sort(v.begin(), v.end());
        int x=v[1];
        int fun = abs(x1 - x) + abs(x2 - x) + abs(x3 - x);
        cout<<fun<<endl;
    }
}