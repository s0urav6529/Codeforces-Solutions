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
constexpr ll MOD=1e9+7;
const int limit=1001;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}


vector<int>b,c;
map<int,int>mp;
vector<vector<int>>dp;



void calculate_min(){

    for(int i=2;i<=limit;i++) mp[i]=imax;

    for(int i=1;i<=limit;i++){

        for(int j=i;j>=1;j--){

            int nn=i+(i/j);
            if(nn>=limit) break;
            mp[nn]=min(mp[nn],1+mp[i]);
        }
    }

}


void rec(int n,int k){

    int dp[n+1][k+1];

    memset(dp,-1,sizeof(dp));
    for(int i=0;i<=n;i++)
        for(int j=0;j<=k;j++)
            if(i==0||j==0)dp[i][j]=0;

    for(int i=1;i<=n;i++){

        for(int j=0;j<=k;j++){

            if(b[i-1]<=j){
                dp[i][j]=max(c[i-1]+dp[i-1][j-b[i-1]],dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];

        }

    }
   cout<<dp[n][k]<<endl;
}


void run_case(){
    int n,k;
    cin>>n>>k;
    c.resize(n);
    b.resize(n);

    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];

    int kk=0;
    for(int i=0;i<n;i++){
        b[i]=mp[b[i]];
        kk+=b[i];
    }



    rec(n,min(kk,k));

    return;
}

int main(){
    fast;
    init_code();
    calculate_min();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}




