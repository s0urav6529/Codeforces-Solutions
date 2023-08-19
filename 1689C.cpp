#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep(j,i,k) for (int i=j ; i<k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)     cout<<fixed<<setprecision(y)<<x<<endl;
#define pf(a)         cout<<a<<endl;
#define ppf(a,b)      cout<<a<<" "<<b<<endl;
#define pppf(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl;
#define nl           endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
//cin.get();
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=998244353;
const int limit=300005;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

}

int n;
vector<int>adj[limit];
vector<int>child(limit);
int dp[limit];

void dfs(int node,int par){

    int ch=0;
    for(auto i:adj[node]){
        if(i!=par){
            ch++;
            dfs(i,node);
            child[node]+=child[i];
        }

    }
    child[node]+=ch;
    //cout<<node<<" "<<child[node]<<endl;
}

int rec(int node,int par){

    if(adj[node].size()==1){
        if(node==1) return n-2;
        else return 0;
    }

    if(dp[node]!=-1) return dp[node];

    vector<int>v;

    for(auto i:adj[node]){
        if(i!=par) v.pb(i);
    }

    if(v.size()==2){
        return dp[node]=max(child[v[0]]+rec(v[1],node),child[v[1]]+rec(v[0],node));
    }
    else{
        return dp[node]=child[v[0]];
    }
}


void run_case(){


    cin>>n;
    for(int i=1;i<=n;i++) {
        adj[i].clear(),child[i]=0,dp[i]=-1;
    }
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1,-1);
    cout<<rec(1,-1)<<endl;

    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}


