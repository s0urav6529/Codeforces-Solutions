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
const int limit=200005;

vector<int>adj[limit];
bool vis[limit];
string s;
int tot;
vector<int>cnt(26);
void dfs(int node){

    vis[node]=true;
    tot++;
    cnt[s[node]-'a']++;
    for(int ch:adj[node]){

        if(vis[ch]==false){
            dfs(ch);
        }
    }
}

void solution(){
    int n,k,ans=0;
    cin>>n>>k>>s;

    for(int i=0;i<n;i++){
        adj[i].clear();
        vis[i]=false;
    }

    for(int i=0;i<k;i++){

        int j=i;
        while(j<n){

            if(j+k<n) {
                adj[i].pb(j+k);
            }
            j+=k;
        }
    }
    for(int i=0;i<k;i++){
        adj[i].pb(n-i-1);
        adj[n-i-1].pb(i);
    }
    for(int i=0;i<k;i++){

        if(vis[i]==false){
            for(int k=0;k<26;k++) cnt[k]=0;
            tot=0;
            dfs(i);
            int mx=0;
            for(int j=0;j<26;j++){
                mx=max(mx,cnt[j]);
            }
            ans+=(tot-mx);
        }

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


