
/**
 *    author:  Dhyan_Mehta
 *    created: 20.07.2025 20:34:23
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
        set<int> x;
        set<int> y;
        for (int i = 0; i < 4; ++i)
        {
            int xi, yi;
            cin >> xi >> yi;
            x.insert(xi);
            y.insert(yi);
        }
        int side = abs(*x.begin() - *next(x.begin()));
        cout<<side*side<<endl;
    }
}