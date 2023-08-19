#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
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
int n,m,k;
int dp[105][105][1005];
int solve(int x,int y,int c)
{
    if(x==n && y==m && c==k) return 1;
    if(dp[x][y][c]!=-1) return dp[x][y][c];
    if(x+1<=n && y+1<=m && c+x<=k && c+y<=k)
        return dp[x][y][c]=solve(x+1,y,c+y)||solve(x,y+1,c+x);
    else if(x+1<=n && c+y<=k) return dp[x][y][c]=solve(x+1,y,c+y);
    else if(y+1<=m && c+x<=k) return dp[x][y][c]=solve(x,y+1,c+x);
    else return dp[x][y][c]=0;
}
void solution()
{
    cin>>n>>m>>k;
    memset(dp,-1,sizeof(dp));
    if(solve(1,1,0)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--)
        solution();
    return 0;
}


