#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v1,v2;
unordered_map<ll,ll>ump;
map<ll,ll>mp;
set<ll>st;
ll a[1000005];
ll pos[1000005],neg[1000005];
ll n,m;
/*bool compair(pair<ll,ll>a,pair<ll,ll b>)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    ll v,ans;
    ld l,r;
    cin>>n>>v>>l>>r;
    ans=n/v;
    l=ceil(l/v);
    r=floor(r/v);
    ans-=(r-l+1);
    cout<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL************************
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}




