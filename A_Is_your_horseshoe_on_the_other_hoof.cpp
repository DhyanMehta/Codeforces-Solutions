 
/**
 *    author:  Dhyan_Mehta
 *    created: 09.07.2025 15:39:56
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

// int t;
// cin>>t;

// while(t--)
// {





// }

    set<int> s;
    for(int i = 0; i < 4; i++) {
        int color;
        cin >> color;
        s.insert(color);  
    }
    cout<<(4-s.size())<<endl;


}