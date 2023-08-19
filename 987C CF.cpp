#include<bits/stdc++.h>
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
#define see(a) cout <<(a)<<" "
#define seel(a) cout<<(a)<<endl
#define see2(a,b) cout <<(a)<<" "<<(b)<<endl
#define see3(a,b,c) cout <<(a)<<" "<<(b)<<" "<<(c)<<endl
#define see4(a,b,c,d) cout <<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define in(a) cin >>(a)
#define in2(a,b) cin >> (a) >> (b)
#define in3(a,b,c) cin >> (a) >> (b) >> (c)
#define in4(a,b,c,d) cin >> (a) >> (b) >> (c) >> (d)
#define gline(z,s) getline(cin,s)
#define sz(x) int((x).size())
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
///arrays
ll a[3005];
ll cost[3005];
//ll b[1000005];
//ll idx[1000005];
ll dp[3005][4];
//ll pos[1000005],neg[1000005];
//string a[100005];
//char indx[100005];
ll n,m;
//string s;
//string p;
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
ll solution(ll i,ll cnt)
{
    if(cnt>=3) return 0;
    if(i>n) return lmax;
    if(dp[i][cnt]!=-1) return dp[i][cnt];
    ll res=lmax;
    fr1(i,j,n,1)
    {
        if(j!=1&&a[j]<=a[i-1]) continue;
        if(cnt+1<=3) res=min(res,cost[j]+solution(j+1,cnt+1));
    }
    return dp[i][cnt]=res;
}
void solve()
{
    //ll ans;
    ll ans=lmax;
    in(n);
    reset(dp,-1);
    fr1(1,i,n,1) in(a[i]);
    fr1(1,i,n,1) in(cost[i]);
    //ans=solution(1,0);
    //cout<<(ans<lmax?ans:-1)<<endl;
    fr1(2,j,n-1,1)
    {
        ll tot=lmax;
        fr1(1,i,j-1,1)
        {
            if(a[i]<a[j])
            {
                tot=min(tot,cost[i]+cost[j]);
            }
        }
        fr1(j+1,k,n,1)
        {
            if(a[j]<a[k])
            {
                ans=min(ans,tot+cost[k]);
            }
        }
    }
    if(ans>=lmax) see(-1);
    else see(ans);
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    //ll t;
    //in(t);
    //while(t--)
    solve();
    return 0;
}

