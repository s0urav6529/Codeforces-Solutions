
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
#define rep(i,k)  for (int i=1 ; i<=k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
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
constexpr ll MOD=1e9+7;
const int limit=100005;

void solution(){

    int n,k;
    cin>>n>>k;
    vector<int>adj[n];
    vector<int>deg(n);
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        deg[x]++,deg[y]++;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }

    queue<int>q;
    vector<int>vis(n);
    for(int i=0;i<n;i++){
        if(deg[i]==1) q.push(i);
    }
    for(int i=1;i<=k && q.size()!=0;i++){

        int len=q.size();
        while(len--){

            int tp=q.front();
            q.pop();
            vis[tp]=1;
            deg[tp]--;
            for(auto ver:adj[tp]){

                deg[ver]--;
                if(deg[ver]==1) q.push(ver);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        if(vis[i]==0) ans++;
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}

