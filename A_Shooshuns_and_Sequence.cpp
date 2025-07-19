 
/**
 *    author:  Dhyan_Mehta
 *    created: 19.07.2025 21:47:02
**/
 
 
#include<bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define endl '\n'
#define DHYAN ios::sync_with_stdio(false),cin.tie(nullptr)


int main()
{
DHYAN;

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool suffixEqual = true;
    for (int i = k; i < n; ++i) {
        if (arr[i] != arr[k - 1]) {
            suffixEqual = false;
            break;
        }
    }

    if (!suffixEqual) {
        cout << -1 << endl;
    } else {

        int ans = 0;
        for (int i = k - 2; i >= 0; --i) {
            if (arr[i] != arr[k - 1]) {
                ans = i + 1;
                cout << ans << endl;
                return 0;
            }
        }

        cout << 0 << endl;
    }
}