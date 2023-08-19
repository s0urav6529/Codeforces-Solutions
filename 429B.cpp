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
const int limit=3000001;

ll dp1[1005][1005],dp2[1005][1005],dp3[1005][1005],dp4[1005][1005];
int grid[1002][1002];

void solution(){

    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){   ///(1,1) to (n,m) for A
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }

    for(int i=1;i<=n;i++){   ///(1,1) to (n,m) for A
        for(int j=1;j<=m;j++){
            dp1[i][j]=grid[i][j]+max(dp1[i][j-1],dp1[i-1][j]);
        }
    }

    for(int i=n;i>0;i--){  ///(n,1) to (1,m) for B
        for(int j=1;j<=m;j++){
            dp2[i][j]=grid[i][j]+max(dp2[i][j-1],dp2[i+1][j]);
        }
    }

    for(int i=n;i>0;i--){   ///after meet a point for A
        for(int j=m;j>0;j--){
            dp3[i][j]=grid[i][j]+max(dp3[i][j+1],dp3[i+1][j]);
        }
    }

    for(int i=1;i<=n;i++){   ///after meet a point for B
        for(int j=m;j>0;j--){
            dp4[i][j]=grid[i][j]+max(dp4[i][j+1],dp4[i-1][j]);
        }
    }

    ll ans=0;
    for(int i=2;i<n;i++){

        for(int j=2;j<m;j++){

            ll case1=dp1[i][j-1]+dp3[i][j+1]+dp2[i+1][j]+dp4[i-1][j];
            ll case2=dp1[i-1][j]+dp3[i+1][j]+dp2[i][j-1]+dp4[i][j+1];
            umax(ans,max(case1,case2));
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
    //cin>>tc;
    while(tc--) solution();
    return 0;
}


