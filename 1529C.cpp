#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
#define rep(p,i,k)  for (int i=p ; i<=k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;

vector<int>tr[100001];
ll val[100001][2];
ll dp[100001][2];

ll dptree(int node,int par,int used)
{
    if(dp[node][used]!=-1) return dp[node][used];
    ll mx=0;

    for(int child:tr[node]){

        if(child!=par){
            mx+=max(dptree(child,node,0)+abs(val[node][used]-val[child][0]),
                    dptree(child,node,1)+abs(val[node][used]-val[child][1]));
        }
    }
    return dp[node][used]=mx;
}

void solution()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        val[i][0]=x,val[i][1]=y;
        tr[i].clear();
        dp[i][0]=dp[i][1]=-1;
    }
    for(int i=1;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        --x,--y;
        tr[x].push_back(y);
        tr[y].push_back(x);
    }
    cout<<max(dptree(1,-1,0),dptree(1,-1,1))<<endl;
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


