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
    cin>>n>>m>>s;
    ll yes=1;
    for(ll i=0;i<s.size();i++)
    {
        for(ll j=i+m;j<s.size();j+=m)
        {
            if(s[i]=='1'&&s[j]=='.') s[j]='0';
            else if(s[i]=='0'&&s[j]=='.') s[j]='1';
            else if(s[i]=='.'&&s[j]=='1') s[i]='0';
            else if(s[i]=='.'&&s[j]=='0') s[i]='1';
            else if(s[i]=='.'&&s[j]=='.') s[i]='1',s[j]='0';
        }
    }
    ll ans=0;
    for(ll i=0;i<s.size();i++) if(s[i]=='.') s[i]='0';
    for(ll i=0;(i+m)<s.size();i++)
    {
        if(s[i]==s[i+m]) ans++;
    }
    if(ans==(s.size()-m)) cout<<"NO"<<endl;
    else cout<<s<<endl;
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

