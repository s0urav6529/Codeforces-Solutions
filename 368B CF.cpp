#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v;
ll a[100005];
set<ll>s;
int main()
{
    fast;
    ll n,m,x;
    cin>>n>>m;
    ll dp[100005];
    for(ll i=1;i<=n;i++)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    for(ll i=n;i>=1;i--)
    {
        s.insert(a[i]);dp[i]=s.size();
    }
    while(m--)
    {
        cin>>x;
        cout<<dp[x]<<endl;
    }
    return 0;
}

