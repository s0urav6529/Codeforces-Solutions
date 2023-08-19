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
ll a[100005];
ll dp[100005][6];
//ll pos[1000005],neg[1000005];
ll n,m;
//string str;
///*********************Keep Coding****************************
/*bool compair(pair<ll,ll>a,pair<ll,ll b>)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
ll ans(ll i,ll TM,ll LM)
{
    if(i>n||i<1||TM==0)return 0;
    if(dp[i][LM]!=-1)return dp[i][LM];
    ll Max=0;
    if(i<=n)
        Max=max(Max,a[i]+ans(i+1,TM-1,LM));
    if(i>=1&&LM>0)
        Max=max(Max,a[i]+ans(i-1,TM-1,LM-1));
    return dp[i][LM]=Max;
}
void solve()
{
    ll tm,lm;///tm=Total_move , lm=Left_move;
    cin>>n>>tm>>lm;
    memset(dp,-1,sizeof(dp));
    for(ll i=1;i<=n;i++)
        cin>>a[i];
    cout<<ans(2,tm,lm)+a[1]<<endl;
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




