 
/**
 *    author:  Dhyan_Mehta
 *    created: 11.07.2025 19:19:47
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

int t;
cin>>t;

while(t--)
{

    int n;
    cin>>n;
    int even = 0, odd = 0;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        cout << min(even, odd) << endl;



}
}