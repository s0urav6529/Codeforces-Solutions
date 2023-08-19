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
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
ll a[1000005];
//ll b[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
ll n,k;
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
void solve()
{
    ll Max=INT_MIN,j=0;
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
        cin>>a[i],Max=max(Max,a[i]);
    if(k%2!=0)
    {
        for(ll i=1;i<=n;i++) a[i]=Max-a[i];
    }
    else
    {
        ll M=INT_MIN;
        while(j!=2)
        {
            for(ll i=1;i<=n;i++)
            {
                a[i]=Max-a[i];
                M=max(a[i],M);
            }
            Max=M;
            j++;
        }
    }
    for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

