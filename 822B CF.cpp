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
string ms,bs;
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
    vector<ll>v,ansv;
    ll mn=INT_MAX;
    cin>>n>>m>>ms>>bs;
    for(ll i=0;i<=(bs.size()-ms.size());i++)
    {
        for(ll j=i,k=0;k<ms.size();j++,k++)
           if(bs[j]!=ms[k])v.pb(k+1);

        ll sz=v.size();
        mn=min(mn,sz);
        if(mn==sz)
        {
            ansv.clear();
            for(auto x:v) ansv.pb(x);
        }
        v.clear();
    }
    cout<<ansv.size()<<endl;
    for(auto i:ansv)cout<<i<<" ";
    cout<<endl;
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




