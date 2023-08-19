#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mkp make_pair
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
ll n,m,mx=INT_MIN,mn=INT_MAX;
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
    mp.clear();
    ll d;
    cin>>n>>m>>d;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i<=d)mp[a[i]]++;
    }
    mn=mp.size();
    for(ll i=d+1;i<=n;i++)
    {
        mp[a[i-d]]--;
        mp[a[i]]++;
        if(mp[a[i-d]]==0)mp.erase(a[i-d]);
        ll sz=mp.size();
        mn=min(mn,sz);
    }
    cout<<mn<<endl;
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



