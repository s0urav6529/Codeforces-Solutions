#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
map<ll,ll>mp;
void solve()
{
    mp.clear();
    ll n,ans=0;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x,mp[x]++;
    }
    for(ll i=2; i<=2*n; i++)
    {
        ll Max=0;
        for(auto j:mp)
        {
            ll other=i-j.first;
            if(other>0)
                Max+=min(mp[other],mp[j.first]);
        }
        ans=max(Max/2,ans);
    }
    cout<<ans<<endl;
    return;
    ///***************MAKE ALL THE INT LL*************
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
