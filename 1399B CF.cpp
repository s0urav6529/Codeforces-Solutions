#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
ll c[55],o[55];
void solve()
{
    ll n,cmin=INT_MAX,omin=INT_MAX,ans=0;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>c[i],cmin=min(cmin,c[i]);
    for(ll i=0;i<n;i++)
        cin>>o[i],omin=min(omin,o[i]);
    for(ll i=0;i<n;i++)
        ans+=max(c[i]-cmin,o[i]-omin);
    cout<<ans<<endl;
    return;
    ///***************MAKE ALL THE INT LL*************
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
