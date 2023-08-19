#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
ll a[1000005];
int main()
{
    fast;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];sort(a+1,a+n+1);
    for(ll i=1;i<=n;i+=2)cout<<a[i]<<" ";
    if(n&1) for(ll i=n-1;i>1;i-=2)cout<<a[i]<<" ";
    else for(ll i=n;i>1;i-=2)cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}


