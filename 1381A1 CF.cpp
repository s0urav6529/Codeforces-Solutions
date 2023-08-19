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
//string str;
ll a[1005];
ll b[1005];
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

void shift(ll x)
{
    for(ll z=1;z<=x;z++) a[z]^=1;///flip the bit
    ll p=1;
    while(p<=x)
    {
        swap(a[p],a[x]);
        p++,x--;
    }
}
void solve()
{
    char ch;
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>ch,a[i]=ch-'0';
    for(ll i=1;i<=n;i++) cin>>ch,b[i]=ch-'0';
    vector<ll>v;
    for(ll i=n;i>0;i--)
    {
        if(a[i]!=b[i]&&i>1)
        {
            if(a[1]==b[i]) v.pb(1),a[1]^=1;
            v.pb(i),shift(i);
        }
        else if(i==1)
        {
            if(a[i]!=b[i])v.pb(1);
        }
    }
    cout<<v.size()<<" ";
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;out;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}




