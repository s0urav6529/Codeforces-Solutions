#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
vector<ll>l;
ll a[1000005];
ll Search(ll l,ll r,ll val)
{

    ll ans=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(val>=a[mid])
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
void solve()
{
    ll n,mx=0,j;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(ll i=1;i<=n;i++)
    {
        ll pos=Search(i,n,a[i]+5);
        pos=pos-i+1;
        mx=max(mx,pos);
        if(mx>=n-i)break;
    }
    cout<<mx<<endl;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}

