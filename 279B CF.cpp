#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
ll solve(ll mid,ll t,ll n)
{
    ll sum=0;
    for(ll i=1;i<=mid;i++)sum+=a[i];
    if(sum<=t)return true;
    for(ll i=mid+1;i<=n;i++)
    {
        sum+=a[i];///ENTERING THE NODE OF RIGHT ARRAY
        sum-=a[i-mid];///DELETING THE NODE OF LEFT ARRAY
        if(sum<=t)return true;
    }
    return false;
}
ll totalbooks(ll n,ll t)
{
    ll l=0,r=n,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(solve(mid,t,n)){ans=max(mid,ans);l=mid+1;}
        else r=mid-1;
    }
    return ans;
}
int main()
{
    fast;
    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n;i++)cin>>a[i];
    cout<<totalbooks(n,t)<<endl;
}
