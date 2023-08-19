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
vector<ll>v;
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
//ll n,m;
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
    v.clear();
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        ll x=s[i]-'0';
        v.pb(x);
    }
    ll c=1,point=0;
    while(!v.empty())
    {
        ll st,start,End,en,Max=0,cnt=0,allzero=0;
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                cnt++;
                if(cnt==1) st=i,en=i;
                else en=i;
            }
            else
            {
                Max=max(Max,cnt);
                if(cnt==Max) start=st,End=en;
                cnt=0;
            }
            if(i+1==v.size())
            {
                Max=max(Max,cnt);
                if(cnt==Max) start=st,End=en;
                cnt=0;
            }
        }
        if(c&1) point+=Max;
        for(ll i=0;i<v.size();i++) if(v[i]==0) allzero++;
        if(allzero==v.size()) break;
        for(ll j=start;j<=End;j++) v[j]=0;
        c++;
    }
    cout<<point<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}

