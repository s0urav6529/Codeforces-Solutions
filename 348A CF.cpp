#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
ll solve(ll n,ll sum)
{
    ll l=0,r=10000000000,ans=10000000000;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if((n*mid)-mid>=sum){ans=min(mid,ans);r=mid-1;}
        else l=mid+1;
    }
    return ans;
}
int main()
{
    fast;
    ll n,sum=0,mx=0;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i],sum+=a[i],mx=max(mx,a[i]);
    cout<<max(mx,solve(n,sum))<<endl;
}

