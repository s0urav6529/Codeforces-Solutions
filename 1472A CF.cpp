///GOD is Allmighty.
///Hore Krisna,Lord Krisna.

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/*using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;*/
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b) memset(a, (b), sizeof(a))
#define fr1(p,i,k,z) for (ll i=p ; i<=k ; i+=z)
#define rf1(p,i,k,z) for (ll i=p ; i>=k ; i-=z)
#define fr0(p,i,k,z) for (ll i=p ; i<k ; i+=z)
#define rf0(p,i,k,z) for (ll i=p-1 ; i>=k ; i-=z)
#define dcfr1(p,i,k,f,e,z) for (ll i=p ; i<=k&&f>e ; i+=z)
#define dcrf1(p,i,k,f,e,z) for (ll i=p ; i>=k&&f>e ; i-=z)
#define dcfr0(p,i,k,f,e,z) for (ll i=p ; i<k&&f>e ; i+=z)
#define dcrf0(p,i,k,f,e,z) for (ll i=p-1 ; i>=k&&f>e ; i-=z)
#define min3(a,b,c) min(a, min(b,c))
#define min4(a,b,c,d) min(a, min(b,min(c,d)))
#define max3(a,b,c) max(a, max(b,c))
#define max4(a,b,c,d) max(a, max(b,max(c,d)))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a/gcd(a,b))*b)
#define pfg(a) cout <<(a)<<" "
#define pf(a) cout <<(a)
#define pfl(a) cout<<(a)<<endl
#define pf2(a,b) cout <<(a)<<" "<<(b)<<endl
#define pf3(a,b,c) cout <<(a)<<" "<<(b)<<" "<<(c)<<endl
#define pf4(a,b,c,d) cout <<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
#define pyes  cout<<"YES"<<endl
#define pno   cout<<"NO"<<endl
#define nl   cout<<"\n"
#define in(a) cin >>(a)
#define in2(a,b) cin >> (a) >> (b)
#define in3(a,b,c) cin >> (a) >> (b) >> (c)
#define in4(a,b,c,d) cin >> (a) >> (b) >> (c) >> (d)
#define in5(a,b,c,d,e) cin >> (a) >> (b) >> (c) >> (d) >>(e)
#define in6(a,b,c,d,e,f) cin >> (a) >> (b) >> (c) >> (d) >>(e) >>(f)
#define gline(z,s) getline(cin,s)
#define sz(x) int((x).size())
#define sortv(k)     sort(k.begin(),k.end())
#define rev(k)       reverse(k.begin(),k.end())
#define all(k)       k.begin(), k.end()
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
///macros
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
///constants
constexpr ll lmax = 1e18;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;
constexpr ld eps = 1e-9;
///Direction array
//int dx[]={-1,0,1,0,-1,1,-1,1};//adjcell move
//int dy[]={0,-1,0,1,-1,-1,1,1};//adjcell move
//int dx[]={-2,-1,1,2,2,1,-1,-2};///knight move
//int dy[]={1,2,2,1,-1,-2,-2,-1};///knight move
///stl arrays
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//vector<pair<ll,ll>>vp;
///2D stl arrays
//vector<ll>adj[20005];
//vector<pii/pll>adj[20005];
///heap
//priority_queue<int>pmax;
//priority_queue<int,vector<int>,greater<int>>pmin;
///arrays
//ll a[1000005];
//ll a[200005];
//ll b[1000005];
//ll idx[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
//string a[100005];
//char indx[100005];
//bool vis[20005]={false};
//ll steps=1;
//cin.get(); skip newline at string
///*************************Keep Coding***********************************

/*set<char> vow = {'a','e','i','o','u'};
bool isvow(char c)
{
     return vow.find(c) != vow.end();
}*/
/*int num(char ch)
{
    int n=ch-'0';
    return n;
}
/*
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
ll nPr(ll n, ll r)
{
    return fact(n) / fact(n - r);
}
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}*/
/*bool compair(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b)
{
    if(a.first<b.first) return true;
    else if(a.first==b.first&&a.second.first<b.second.first) return true;
    else if(a.first==b.first&&a.second.first==b.second.first&&a.second.second<b.second.second) return true;
    return false;
}*/
/*bool compair(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool compair(string a,string b)
{
    return a.size()<b.size();
}*/
/*bool sign(ll num)
{
    return num>0;
}*/
ll Mod(ll x)
{
    return ((x%mod + mod)%mod); ///we add mod because x can be positive or negative
}
ll addmod(ll a,ll b)
{
    return Mod(Mod(a)+Mod(b));  ///((a%m)+(b%m))%m
}
ll mulmod(ll a,ll b)
{
    return Mod(Mod(a)*Mod(b)); ///((a%m)*(b%m))%m
}
//string s,p;
void solve()
{
    ll w,h,n,cntw=1,cnth=1;
    in3(w,h,n);
    while(w)
    {
        if(w&1) break;
        w/=2;
        cntw*=2;
    }
    while(h)
    {
        if(h&1) break;
        h/=2;
        cnth*=2;
    }
    if((cntw*cnth)>=n) pyes;
    else pno;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    int tc=1;
    in(tc);
    while(tc--) solve();
    return 0;
}

