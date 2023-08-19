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
ll a[205];
ll b[205];
//ll x[1000005];
ll ab[205][205];
//ll pos[1000005],neg[1000005];
ll n,m;
//string s,s1,s2;
///*************************Keep Coding***********************************
/*bool compair(pair<ll,ll>a,pair<ll,ll>b)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool compair(string a,string b)
{
    return a.size()<b.size();
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
bool Ans(ll p)
{
    ll yes=1;
    for(ll r=0;r<n;r++)
    {
        ll ok=0;
        for(ll c=0;c<m;c++)
        {
            if((p|(a[r]&b[c]))==p) ok=1;
        }
        if(!ok) return false;
    }
    return true;
}
void solve()
{
    ll i;
    cin>>n>>m;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<m;i++)cin>>b[i];
    for(i=0;i<512;i++)
    {
        if(Ans(i))break;
    }
    cout<<i<<endl;
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

