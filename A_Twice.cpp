/**
 *    author:  Dhyan_Mehta
 *    created: 06.07.2025 18:47:47
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
        for (int i = 0; i < n; i++) cin >> arr[i];

        unordered_map<int, int> freq;
        for (int num : arr)
            freq[num]++;

        int cnt = 0;
        for (auto& [num, count] : freq)
        {
            cnt += count / 2;
        }

        cout << cnt << endl;
    }
}
