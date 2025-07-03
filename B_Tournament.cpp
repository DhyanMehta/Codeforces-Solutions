/**
 *    author:  Dhyan_Mehta
 *    created: 03.07.2025 22:51:03
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
    int n,j,k;
    cin>>n>>j>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k>=2){
        cout<<"Yes"<<endl;
    }
    else{
        int strength_j = arr[j - 1];
        int count_stronger = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > strength_j)
                count_stronger++;
        }
        
        if (count_stronger <= k - 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    }
    
}

