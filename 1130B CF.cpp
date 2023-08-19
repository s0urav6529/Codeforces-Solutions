#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
set<ll>s;
ll n,d;
bool isin(ll x,ll y)
{
    ll x1=0,y1=d,x2=n-d,y2=n;
    ll p1=n,q1=n-d,p2=0,q2=d;
    if(x>=x1&&x<=x2&&y>=y1&&y<=y2) return true;
    else if(x>=p1&&x<=p2&&y>=q1&&y<=q2) return true;
    return false;
}
void solve()
{
    ll t;
    cin>>n>>d;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(isin(x,y))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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




