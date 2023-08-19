#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
void solve()
{
    ll x,y,n;
    cin>>x>>y>>n;
    ll ans=n/x;
    ans*=x;
    ll a=ans+y;
    if(a<=n)cout<<a<<endl;
    else
    {
        ans-=(x-y);
        cout<<ans<<endl;
    }
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}


