#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[100005];
ll b[100005];
void solve()
{
    ll n,mp,sum=0,ans=0;
    cin>>n>>mp;
    for(ll i=0;i<n;i++)cin>>a[i],sum+=a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    ll l=0,r=1000000000;
    while(l<=r)
    {
        ll mid=(l+r)/2,total=0,k=mp;
        for(ll i=0;i<n;i++)
        {
            ll need=(mid*a[i]);
            if(need>b[i]){ll take=need-b[i];if(k>=take){k-=take;}else{need-=take;need+=k;k=0;}}
            total+=need;
        }
        if(mid*sum==total)ans=max(mid,ans),l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    solve();
    return 0;
}




