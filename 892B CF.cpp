#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
vector<ll>l;
ll a[1000005];
bool b[1000005];
void solve()
{
    ll n,j,cnt=0;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll jmax=n;
    for(ll i=n;i>=2;i--)
    {
        ll j=max(0ll,i-a[i]);
        if(jmax>j)
        {
            for(ll x=j;x<jmax;x++) b[x]=1;
            jmax=j;
        }
        if(i==jmax)jmax=i-1;
        if(j==1)break;
    }
    for(ll i=1;i<=n;i++) if(b[i]==0)cnt++;
    cout<<cnt<<endl;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}


