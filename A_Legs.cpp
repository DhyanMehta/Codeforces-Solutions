
/**
 *    author:  Dhyan_Mehta
 *    created: 15.07.2025 00:12:04
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
        int animals = n / 4;
        if (n % 4 != 0)
        {
            animals += 1;
        }

        cout << animals << endl;
    }
}