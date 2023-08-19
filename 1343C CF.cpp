#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
bool sign(ll num)
{
    return num>0;
}
void solve()
{
    ll n,ans=0;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        ll j=i,mx=a[i];
        while(j<=n&&sign(a[j])==sign(a[i]))
        {
            mx=max(mx,a[j]);
            j++;
        }
        ans+=mx;
        i=j-1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
