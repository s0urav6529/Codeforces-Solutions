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
vector<ll>vr,vg,vb;
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
ll dp[205][205][205];
//ll pos[1000005],neg[1000005];
ll r,g,b,ans=0,m;
string s,p;
///*************************Keep Coding***********************************
/*bool compair(pair<ll,ll>a,pair<ll,ll>b)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool compair(string a,string b)///sort string by size
{
    return a.size()<b.size();
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
ll ANS(ll rr,ll gg,ll bb)
{
    if((rr>=r&&gg>=g)||(rr>=r&&bb>=b)||(gg>=g&&bb>=b)) return 0;
    if(dp[rr][gg][bb]!=-1) return dp[rr][gg][bb];
    ll Max=0;
    if(rr<r&&gg<g) Max=max(Max,vr[rr]*vg[gg]+ANS(rr+1,gg+1,bb));
    if(rr<r&&bb<b) Max=max(Max,vr[rr]*vb[bb]+ANS(rr+1,gg,bb+1));
    if(gg<g&&bb<b) Max=max(Max,vg[gg]*vb[bb]+ANS(rr,gg+1,bb+1));
    ans=max(ans,Max);
    return dp[rr][gg][bb]=Max;

}
void solve()
{
    cin>>r>>g>>b;
    vr.resize(r);
    vb.resize(b);
    vg.resize(g);
    for(ll i=0;i<r;i++) cin>>m,vr.pb(m);
    for(ll i=0;i<g;i++) cin>>m,vg.pb(m);
    for(ll i=0;i<b;i++) cin>>m,vb.pb(m);
    sort(vr.begin(),vr.end(),greater<ll>());
    sort(vg.begin(),vg.end(),greater<ll>());
    sort(vb.begin(),vb.end(),greater<ll>());
    memset(dp,-1,sizeof(dp));
    ANS(0,0,0);
    cout<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}

