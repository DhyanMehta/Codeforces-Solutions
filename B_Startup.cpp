 
/**
 *    author:  Dhyan_Mehta
 *    created: 06.07.2025 19:01:19
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

   int n, k;
        cin >> n >> k;

        unordered_map<int, long long> brand_cost;

        for (int i = 0; i < k; ++i) {
            int b, c;
            cin >> b >> c;
            brand_cost[b] += c; 
        }

        vector<long long> total_brand_values;
        for (auto &[brand, total] : brand_cost) {
            total_brand_values.push_back(total);
        }

        sort(total_brand_values.rbegin(), total_brand_values.rend());

        long long total_profit = 0;
        for (int i = 0; i < min(n, (int)total_brand_values.size()); ++i) {
            total_profit += total_brand_values[i];
        }

        cout << total_profit << endl;



}
}