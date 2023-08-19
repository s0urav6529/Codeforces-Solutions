#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
ll n,m;
void solve()
{
    ll c,s;
    cin>>c>>s;
    if(c>s)cout<<s<<endl;
    else
    {
        ll ans=0;
        while(s)
        {
            ll add=s/c;
            ans+=add*add;
            s-=add,c--;
        }
        cout<<ans<<endl;
    }
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
