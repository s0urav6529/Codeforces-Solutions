#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
int main()
{
    fast;
    ll n,sum=0;
    cin>>n;
    ll a[n+2],b[n+2],c[n+2];
    for(ll i=0;i<n;i++)cin>>a[i]>>b[i],sum+=a[i],c[i]=b[i];
    sort(c,c+n);
    for(ll i=0;i<n;i++)
    {
        if(c[n-1]==b[i])cout<<(sum-a[i])*c[n-2]<<" ";
        else cout<<(sum-a[i])*c[n-1]<<" ";
    }
    return 0;
}


