#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    ll n,t;
    cin>>t;
    while(t--)
    {
       cin>>n;
       if(n%2==0&&!((n/2)&1))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}


