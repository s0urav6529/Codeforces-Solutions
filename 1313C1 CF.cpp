///GOD is Allmighty.
///Hore Krisna,Lord Krisna.

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
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
#define max3(a,b,c) max(a, max(b,c))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((gcd(a,b)/a)*b)
#define seeg(a) cout <<(a)<<" "
#define seen(a) cout <<(a)
#define seel(a) cout<<(a)<<endl
#define see2(a,b) cout <<(a)<<" "<<(b)<<endl
#define see3(a,b,c) cout <<(a)<<" "<<(b)<<" "<<(c)<<endl
#define see4(a,b,c,d) cout <<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define syes  cout<<"YES"<<endl
#define sno   cout<<"NO"<<endl
#define in(a) cin >>(a)
#define in2(a,b) cin >> (a) >> (b)
#define in3(a,b,c) cin >> (a) >> (b) >> (c)
#define in4(a,b,c,d) cin >> (a) >> (b) >> (c) >> (d)
#define in5(a,b,c,d,e) cin >> (a) >> (b) >> (c) >> (d) >>(e)
#define in6(a,b,c,d,e,f) cin >> (a) >> (b) >> (c) >> (d) >>(e) >>(f)
#define gline(z,s) getline(cin,s)
#define sz(x) int((x).size())
#define sorta(k,p,z) sort(k,k+p+z);
#define sortv(k)     sort(k.begin(),k.end())
#define rev(k)       reverse(k.begin(),k.end())
#define all(k)       k.begin(), k.end()
///macros
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
///2D stl arrays
//vector<ll>adj[20005];
///arrays
ll a[1005];
//ll a[200005];
//ll b[1000005];
//ll idx[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
//string a[100005];
//char indx[100005];
bool vis[1005]={false};
ll n,m;
//string s;
//string p;
//ll steps=1;
//cin.get(); skip newline at string
///*************************Keep Coding***********************************

/*set<char> vow = {'a','e','i','o','u'};
bool isvow(char c)
{
     return vow.find(c) != vow.end();
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
/*void dfs(ll p)
{
    vis[p]=1;
    fr0(0,i,sz(v[p]),1)
    {
        ll child=v[p][i];
        if(!vis[child])
        {
            dfs(child);
        }
    }
}*/
void solve()
{
    ll Maxsum=imin,p_min,id;
    in(n);
    fr0(0,i,n,1) in(a[i]);
    vector<ll> ans(n);
    fr0(0,i,n,1)
    {
        ll sum=a[i],p_min=a[i];
        rf0(i,j,0,1)
        {
            sum+=min(p_min,a[j]);
            p_min=min(p_min,a[j]);
        }
        p_min=a[i];
        fr0(i+1,j,n,1)
        {
            sum+=min(p_min,a[j]);
            p_min=min(p_min,a[j]);
        }
        if(sum>Maxsum)
        {
            id=i;
            Maxsum=sum;
        }
    }
    ans[id]=a[id];
    p_min=a[id];
    rf0(id,i,0,1)
    {
        ans[i]=min(p_min,a[i]);
        p_min=min(p_min,a[i]);
    }
    p_min=a[id];
    fr0(id+1,i,n,1)
    {
        ans[i]=min(p_min,a[i]);
        p_min=min(p_min,a[i]);
    }
    for(auto i:ans)
        seeg(i);
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    ll t=1;
    //in(t);
    while(t--) solve();
    return 0;
}
