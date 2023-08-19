#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
ll n;
bool issorted()
{
   for(ll i=1;i<=n;i++)
   {
       if(a[i]!=i)return false;
   }
   return true;
}
ll sort()
{
    ll one=0,store;
    for(ll i=1;i<=n;i++)
    {
        if(a[i]!=i&&i==1)one++;
        if(a[i]==i) one++;
        else store=one;
    }
    return store;
}
void solve()
{
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    if(issorted())cout<<"0"<<endl;
    else
    {
        ll ans=sort();
        if(ans==1) cout<<ans<<endl;
        else cout<<"2"<<endl;
    }
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
