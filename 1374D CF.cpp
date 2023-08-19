#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
map<ll,ll>mp;
void solve()
{
    ll n,k,cnt=0,x;
    mp.clear();
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        mp[x%k]++;
    }
    auto it=mp.begin();
    while(it!=mp.end())
    {
        if(it->first!=0) cnt=max(cnt,(it->second*k)-it->first);
        it++;
    }
    if(cnt)cout<<++cnt<<endl;
    else cout<<cnt<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
