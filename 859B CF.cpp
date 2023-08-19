#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
void solve()
{
    ll n,x,y,rest,ans=0;
    cin>>n;
    for(ll i=1;i*i<=n;i++) x=i;

    y=n/x;
    rest=n-(x*y);
    if(rest==0)ans+=((2*x)+y)+(y-rest);
    else ans+=((2*x)+y)+(y-rest)+(rest+2);

    cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}

