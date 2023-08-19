#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
map<ll,ll>mp;
ll a[100005];
void solve()
{
    ll n,m,x,cnt=0,p=0;
    cin>>n>>m;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        if(cnt<n)if(x>=a[p])cnt++,p++;
    }
    cout<<n-cnt<<endl;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}
