#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[105];
map<ll,ll>mp;
void solve()
{
    ll n,k,d,mn=INT_MAX;
    cin>>n>>k>>d;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=((n-d)+1);i++)
    {
        for(ll j=i;j<=((i+d)-1);j++)
        {
            mp[a[j]]++;
        }
        ll x=mp.size();
        mn=min(x,mn);
        mp.clear();
    }
    cout<<mn<<endl;
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
