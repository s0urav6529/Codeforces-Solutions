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
#define see(a) cout <<(a)<<" "
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
#define MX 1000006;
///constants
constexpr ll lmax = 1e18;
constexpr ll imax = 1e9;
constexpr ll mod = 1e9+7;
constexpr ld eps = 1e-9;
constexpr ll imin = INT_MIN;
///stl arrays
vector<ll>prime;
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//vector<pair<ll,ll>>vp;
///arrays
ll a[100005];
//ll prime[100000];
ll b[505][505];
//ll idx[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
//string a[100005];
//char indx[100005];
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
void seive()
{
    ll x=1000006;
    bitset<1000006>isprime;
    isprime.set();
    for(ll i=2;i*i<=x;i++)
    {
        if(isprime[i])
        {
            for(ll j=i*i;j<=x;j+=i) isprime[j]=0;
        }
    }
    for(ll i=2;i<=x;i++)
    {
        if(isprime[i]) prime.pb(i);
    }
    //fr0(i,30) see(prime[i]);
}
void solve()
{
    seive();
    in2(n,m);
    fr1(i,n)
    fr1(j,m) in(b[i][j]);
    ll ans=LLONG_MAX;
    fr1(i,n)
    {
        ll total=0;
        fr1(j,m)
        {
            ll val=*lb(prime.begin(),prime.end(),b[i][j]);
            total+=(val-b[i][j]);
        }
        ans=min(ans,total);
    }
    fr1(i,m)
    {
        ll total=0;
        fr1(j,n)
        {
            ll val=*lb(prime.begin(),prime.end(),b[j][i]);
            total+=(val-b[j][i]);
        }
        ans=min(ans,total);
    }
    cout<<ans<<endl;
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

