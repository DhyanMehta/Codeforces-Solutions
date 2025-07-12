 
/**
 *    author:  Dhyan_Mehta
 *    created: 12.07.2025 19:04:05
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



    int x,y,z;
    cin>>x>>y>>z;
    double a = sqrt(x * z / y);
    double b = sqrt(x * y / z);
    double c = sqrt(y * z / x);

    int sum_of_edges = 4 * (a + b + c);

    cout << sum_of_edges << endl;
}