
/**
 *    author:  Dhyan_Mehta
 *    created: 06.07.2025 20:44:12
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

    // int arr;
    // cin>>arr;

    // while(arr--)
    // {

    // }

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0;
    int j = n - 1;
    int alice = 0;
    int bob = 0;
    int c1 = 0, c2 = 0;

    while (i <= j)
    {
        if (alice <= bob)
        {
            alice += arr[i];
            i++;
            c1++;
        }
        else
        {
            bob += arr[j];
            j--;
            c2++;
        }
    }
    cout << c1 << " " << c2 << endl;
}
