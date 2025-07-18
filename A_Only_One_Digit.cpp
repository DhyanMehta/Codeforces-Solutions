
/**
 *    author:  Dhyan_Mehta
 *    created: 18.07.2025 12:40:46
 **/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define endl '\n'
#define DHYAN ios::sync_with_stdio(false), cin.tie(nullptr)

bool has_common_digit(int x, int y)
{
    set<char> x_digits, y_digits;

    for (char c : to_string(x))
        x_digits.insert(c);
    for (char c : to_string(y))
        y_digits.insert(c);

    for (char d : x_digits)
    {
        if (y_digits.count(d))
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
        int x;
        cin >> x;
        int y = 0;
        while (true)
        {
            if (has_common_digit(x, y))
            {
                cout << y << endl;
                break;
            }
            y++;
        }
    }
}