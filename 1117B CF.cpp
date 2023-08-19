#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
void solve()
{
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<ll>());
    ll x=m/(k+1);
    ans+=((a[0]*k)*x);
    ans+=(a[1]*x);
    ll rest=m-((k*x)+x);
    ans+=(rest*a[0]);
    cout<<ans<<endl;
    return;
}
int main()
{
    solve();
    return 0;
}
