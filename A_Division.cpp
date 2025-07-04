 
/**
 *    author:  Dhyan_Mehta
 *    created: 04.07.2025 10:14:39
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
    if(n>=1900){
        cout<<"Division 1"<<endl;
    }
    else if(n>=1600 && n<=1899){
        cout<<"Division 2"<<endl;
    }
    else if(n>=1400 && n<=1599){
        cout<<"Division 3"<<endl;
    }
    else if(n<=1399){
        cout<<"Division 4"<<endl;
    }





}
}