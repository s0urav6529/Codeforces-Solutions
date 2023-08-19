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
ll a[1005][1005];
ll dp[1005][1005];
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
void initialization()
{
    for(ll r=0;r<n;r++)
        for(ll c=0;c<m;c++) dp[r][c]=0;
}
void solve()
{
    ll ans=0;
    cin>>n>>m;
    for(ll r=0;r<n;r++)
        for(ll c=0;c<m;c++) cin>>a[r][c];

    initialization();
    for(ll r=0;r<n;r++)//rowwise dp
    {
        ll flip=0;
        for(ll c=0;c<m;c++)
        {
            if(a[r][c]) flip=1;
            else dp[r][c]+=flip;
        }
        flip=0;
        for(ll c=m-1;c>=0;c--)
        {
            if(a[r][c]) flip=1;
            else dp[r][c]+=flip;
        }
    }

    for(ll c=0;c<m;c++)//columnwise dp
    {
        ll flip=0;
        for(ll r=0;r<n;r++)
        {
            if(a[r][c]) flip=1;
            else dp[r][c]+=flip;
        }
        flip=0;
        for(ll r=n-1;r>=0;r--)
        {
            if(a[r][c]) flip=1;
            else dp[r][c]+=flip;
        }
    }

    for(ll r=0;r<n;r++)
        for(ll c=0;c<m;c++)
         if(!a[r][c])ans+=dp[r][c];
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



