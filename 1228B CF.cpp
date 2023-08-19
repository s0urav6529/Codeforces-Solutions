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
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
//ll pos[1000005],neg[1000005];
//ll n,m;
//string s,p;
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
void solve()
{
    ll h,w;
    cin>>h>>w;
    ll dp[h][w];
    for(ll r=0;r<h;r++)
        for(ll c=0;c<w;c++) dp[r][c]=0;

    for(ll r=0;r<h;r++)
    {
        int x;
        cin>>x;
        for(ll c=0;c<x;c++) dp[r][c]=1;
        if(x!=w)dp[r][x]=-1;
    }
    for(ll c=0;c<w;c++)
    {
        int x;
        cin>>x;
        for(ll r=0;r<x;r++)
        {
            if(dp[r][c]==-1)
            {
                cout<<0<<endl;
                return;
            }
            dp[r][c]=1;
        }
        if(x!=h&&dp[x][c]==1)
        {
            cout<<0<<endl;
            return;
        }
        if(x!=h)dp[x][c]=-1;
    }
    ll ans=1;
    for(ll r=0;r<h;r++)
    {
        for(ll c=0;c<w;c++)
        {
            if(!dp[r][c]) ans*=2;
            ans%=Mod;
        }
    }
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
