#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
#define Mod 1000000007
using namespace std;
using ll=long long;
using ld=long double;
//vector<ll>v1,v2;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>st;
//ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n,m;
string str;
///*********************DONOT CARE ABOUT RATING****************************
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
    ll ans=0;
    vector<ll>day,rem;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x>=m) day.pb(x/m);
        if(x%m!=0)rem.pb(x%m);
    }
    ll extra=0;
    for(auto i:day)
    {
       if(i&1)
       {
           ans+=(i/2);
           if(rem.size()>0) rem.pop_back(),ans++;
           else extra++;
       }
       else ans+=(i/2);
    }
    ans+=(extra/2)+(extra%2);
    ans+=(rem.size()/2)+(rem.size()%2);
    cout<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;out;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}




