#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b) memset(a, (b), sizeof(a))
#define fr1(i,k) for (ll i=1 ; i<=k ; i++)
#define rf1(i,k) for (ll i=k ; i>0 ; i--)
#define fr0(i,k) for (ll i=0 ; i<k ; i++)
#define rf0(i,k) for (ll i=k-1 ; i>-1 ; i--)
#define min3(a,b,c) min(a, min(b,c))
#define max3(a,b,c) max(a, max(b,c))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((gcd(a,b)/a)*b)
#define see(a) cout <<(a)
#define see2(a,b) cout <<(a)<<" "<<(b)<<endl
#define see3(a,b,c) cout <<(a)<<" "<<(b)<<" "<<(c)<<endl
#define seel(a) cout<<(a)<<endl
#define in(a) cin >>(a)
#define in2(a,b) cin >> (a) >> (b)
#define in3(a,b,c) cin >> (a) >> (b) >> (c)
#define gline(z,s) getline(cin,s)
///macros
#define sz(x) int((x).size())
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
///constants
constexpr ll lmax = 1e18;
constexpr ll imax = 1e9;
constexpr ll mod = 1e9+7;
constexpr ld eps = 1e-9;
constexpr ll imin = INT_MIN;
///stl arrays
//vector<ll>v1,v2;
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//vector<pair<ll,ll>>vp;
///arrays
//ll a[1000005];
//ll a[200005];
//ll b[1000005];
//ll idx[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
string a[100005];
char indx[100005];
ll hlp[100005];
ll n,m;
string s;
//string p;
//cin.get(); skip newline at string
///*************************Keep Coding***********************************

/*set<char> vow = {'a','e','i','o','u'};
bool isvow(char c)
{
     return vow.find(c) != vow.end();
}*/
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
    in(n);
    fr1(i,n) in(a[i]);
    reset(hlp,1);
    fr1(i,n)
    {
        s=a[i];
        if(i==1)
        {
            fr0(j,sz(s)) indx[j]=s[j],hlp[j]=1;
            continue;
        }
        fr0(j,sz(s))
        {
            if(s[j]!=indx[j]&&indx[j]!='?'&&s[j]=='?') hlp[j]*=1;
            else if(s[j]!=indx[j]&&indx[j]=='?'&&s[j]!='?') indx[j]=s[j],hlp[j]*=1;
            else if(s[j]!=indx[j]) hlp[j]*=0;
            else hlp[j]*=1;
        }
    }
    fr0(i,sz(a[1]))
    {
        if(hlp[i])
        {
            if(indx[i]=='?') see("a");
            else see(indx[i]);
        }
        else see("?");
    }
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
