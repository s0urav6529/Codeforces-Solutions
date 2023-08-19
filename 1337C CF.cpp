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
#define min3(a,b,c) min(a, min(b,c))
#define min4(a,b,c,d) min(a, min(b,min(c,d)))
#define max3(a,b,c) max(a, max(b,c))
#define max4(a,b,c,d) max(a, max(b,max(c,d)))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a/gcd(a,b))*b)
#define pfl(a) cout<<(a)<<endl
#define pf2(a,b) cout <<(a)<<" "<<(b)<<endl
#define pf3(a,b,c) cout <<(a)<<" "<<(b)<<" "<<(c)<<endl
#define pf4(a,b,c,d) cout <<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
#define pyes  cout<<"YES"<<endl
#define pno   cout<<"NO"<<endl
#define nline   cout<<"\n"
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
///heap
//priority_queue<int>pmax;
//priority_queue<int,vector<int>,greater<int>>pmin;
//cin.get(); skip newline at string
///*************************Keep Coding***********************************
vector<int>adj[200005];
int n,k;
void dis_dfs(int src,int parent,int dis,vector<pii>&sub_dis)
{
    sub_dis[src].ss=dis;
    for(int child:adj[src])
    {
        if(child!=parent)
        {
            dis_dfs(child,src,dis+1,sub_dis);
        }
    }
}
void sub_dfs(int src,int parent,vector<pii>&sub_dis)
{
    int subordinate=0;
    for(int child:adj[src])
    {
        if(child!=parent)
        {
            sub_dfs(child,src,sub_dis);
            subordinate+=(1+sub_dis[child].ff);
        }
    }
    sub_dis[src].ff=subordinate;
}
bool compair(pair<int,int>a,pair<int,int>b)
{
    return a.ss-a.ff>b.ss-b.ff;
}
void solution()
{
    in2(n,k);
    vector<pii>sub_dis(n);
    fr1(1,i,n-1,1)
    {
        int x,y;
        cin>>x>>y;
        --x,--y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dis_dfs(0,-1,0,sub_dis); ///distance ber korsi root theke
    sub_dfs(0,-1,sub_dis);  ///prottek node er sub-ordinate ber korsi
    sort(sub_dis.begin(),sub_dis.end(),compair);  ///sort korsi distance-subordinate onushare
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(k--)
        {
            ans+=(sub_dis[i].ss-sub_dis[i].ff);
        }
        else break;
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    //read;//out;
    int tc=1;
    //in(tc);
    while(tc--) solution();
    return 0;
}

