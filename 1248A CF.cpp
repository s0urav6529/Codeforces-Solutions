#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
ll n,m;
void solve()
{
    ll oddn=0,evenn=0,oddm=0,evenm=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x%2==0)evenn++;
        else oddn++;
    }
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        if(x%2==0)evenm++;
        else oddm++;
    }
    ll ans=0;
    ans+=(oddn*oddm);
    ans+=(evenn*evenm);
    cout<<ans<<endl;
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
