 
/**
 *    author:  Dhyan_Mehta
 *    created: 05.07.2025 22:32:37
**/
 
 
#include<bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long
#define endl '\n'
#define DHYAN ios::sync_with_stdio(false),cin.tie(nullptr)

int check(int a){
    while(a%2==0) a/=2;
    while(a%3==0) a/=3;

    return a;
}
int main()
{
DHYAN;

// int t;
// cin>>t;

// while(t--)
// {





// }
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int x=check(arr[0]);

    for(int i=1;i<n;i++){
        if(check(arr[i]) != x) 
        {
            cout<<"No"<<endl; 
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;



}