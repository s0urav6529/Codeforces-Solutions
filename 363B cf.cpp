#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
int main()
{
    fast;
    ll n,k,x,mn=INT_MAX,ans;
    cin>>n>>k;
    a[0]=0;
    for(ll i=1;i<=n;i++)cin>>x,a[i]=a[i-1]+x;
    for(ll i=k;i<=n;i++)
    {
        ll f=a[i]-a[i-k];
        mn=min(mn,f);
        if(mn==f)ans=(i-k)+1;
    }
    cout<<ans<<endl;
    return 0;
}

