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
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=2002;

int n,h,l,r;
int a[limit];
int dp[limit][limit];

int solve(int i,int t){

    if(i>n) return 0;

    if(dp[i][t]!=-1) return dp[i][t];

    int t1=(t+a[i])%h;
    int c1=(l<=t1 && t1<=r ? 1:0);

    int t2=(t+a[i]-1)%h;
    int c2=(l<=t2 && t2<=r ? 1:0);

    return dp[i][t]=max(c1+solve(i+1,t1),c2+solve(i+1,t2));

}

void solution(){

    reset(dp,-1);
    cin>>n>>h>>l>>r;
    for(int i=1;i<=n;i++) cin>>a[i];

    cout<<solve(1,0)<<endl;

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


