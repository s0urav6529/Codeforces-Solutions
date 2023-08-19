#include<bits/stdc++.h>
using namespace std;
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
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;
const int limit=200005;

int n,e;
vector<int>g[limit];
bool vis[limit];
int ver,edge,f;
bool dfs(int node,int root){

    vis[node]=true;
    ver++;
    int deg=0;
    for(int child:g[node]){
        deg++;
        edge++;
        if(!vis[child]){
            dfs(child,root);
        }
    }
    if(deg==2) f*=1;
    else f*=0;

    if(node==root){
        //cout<<node<<" "<<edge<<" "<<ver<<endl;
        if((edge/2==ver) && f) return true;
        else return false;
    }

}
void solution(){
    cin>>n>>e;
    for(int i=1;i<=e;i++){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ver=0,edge=0,f=1;
            if(dfs(i,i)) cnt++;
        }
    }
    cout<<cnt<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}


