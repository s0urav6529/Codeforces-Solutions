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
const int limit=505;

int dp[limit][limit];
int a[limit];

int solve(int l,int r){

    if(l>r) return 0;

    if(a[l]==a[r] && r-l<=1) return 1;

    if(dp[l][r]!=-1) return dp[l][r];

    int ans=100001;

    if(a[l]==a[r]) ans=solve(l+1,r-1);

    for(int i=l;i<r;i++){

        ans=min(ans,solve(l,i) + solve(i+1,r));
    }
    return dp[l][r]=ans;

}

void solution(){

    reset(dp,-1);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<solve(1,n);
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


