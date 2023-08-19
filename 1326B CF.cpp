#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
void solve()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll mx=0;
    for(ll i=0;i<n;i++)
    {
        cout<<mx+a[i]<<" ";
        mx=max(mx,a[i]+mx);
    }
    return;
}
int main()
{
    solve();
    return 0;
}
