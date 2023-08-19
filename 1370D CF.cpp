#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
ll n,k;
ll isodd(ll mid)
{
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(!(cnt&1))
        {
            if(a[i]<=mid)cnt++;
        }
        else cnt++;
        if(cnt==k)return true;
    }
    return false;
}
ll iseven(ll mid)
{
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if((cnt&1))
        {
            if(a[i]<=mid)cnt++;
        }
        else cnt++;
        if(cnt==k)return true;
    }
    return false;
}
ll solve(ll l,ll r)
{
    ll ans=r;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(isodd(mid)||iseven(mid))
        {
            ans=min(ans,mid);
            //cout<<mid<<endl;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}
int main()
{
    fast;
    ll mx=INT_MIN,mn=INT_MAX;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    cout<<solve(mn,mx)<<endl;
    return 0;
}
