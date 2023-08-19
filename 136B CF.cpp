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
vector<ll>v1,v2,v3;
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
ll n,m;
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
    ll a,c,b=0,j=0;
    cin>>a>>c;
    while(a) v1.pb(a%3),a/=3;
    while(c) v2.pb(c%3),c/=3;
    if(v1.size()>v2.size()) while(v2.size()!=v1.size()) v2.pb(0);
    else if(v1.size()<v2.size()) while(v2.size()!=v1.size()) v1.pb(0);
    v1.pb(0),v2.pb(0);
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    for(ll i=0;i<v1.size();i++) v3.pb((v2[i]-v1[i]+3)%3);
    for(ll i=v3.size()-1;i>=0;i--)
    {
        b+=(v3[i]*pow(3,j));
        j++;
    }
    cout<<b<<endl;
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

