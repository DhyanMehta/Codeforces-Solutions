
/**
 *    author:  Dhyan_Mehta
 *    created: 26.07.2025 20:47:35
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

    int n, k;
    cin >> n >> k;
    int available_Time = 240 - k;
    int Problem_Solved = 0;
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        time += 5 * i;
        if (time <= available_Time)
        {
            Problem_Solved++;
        }
        else
        {
            break;
        }
    }
    cout << Problem_Solved << endl;
}