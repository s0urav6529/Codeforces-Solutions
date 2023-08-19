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
map<string,ll>Mp;
map<ll,string>Mp2;
//set<ll>sl;
//set<pair<ll,ll>>sp;
ll a[100005];
ll cost[100005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
ll n,m,k;
string s;
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
    ll x,p;
    cin>>n>>k>>m;
    for(ll i=1;i<=n;i++)
    {
        cin>>s;
        Mp[s]=i;
        Mp2[i]=s;
    }
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=k;i++)
    {
        ll tag,Min=INT_MAX;
        cin>>p;
        for(ll j=1;j<=p;j++)
        {
            cin>>x;
            if(j==1) tag=x;
            Min=min(a[x],Min);
            cost[tag]=Min;
            Mp[Mp2[x]]=tag;
        }
    }
    x=0;
    for(ll i=1;i<=m;i++)
    {
        cin>>s;
        x+=cost[Mp[s]];
    }
    cout<<x<<endl;
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

