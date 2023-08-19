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
#define pfp(x,y)     cout<<fixed<<setprecision(y)<<x
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
const int limit=100005;

bool ok(ll mid,vector<ll>&a,vector<ll>&dp,ll n,ll k){


    ll add=a[0],mm=mid-1;

    ll lr=0,rr=mm;

    while(lr<=rr){

        ll mid2=lr+(rr-lr)/2;
        ll extra=mm-mid2;

        ll del=(add-mid2)*extra;

        ll pluss=dp[n-1-extra];

        pppf(mid2,extra,pluss-del);

        if(pluss-del<k){
            return true;
        }
        else lr=mid2+1;

    }
    return false;


}

void solution(){

    ll n,k;
    cin>>n>>k;
    vector<ll>a(n),dp(n);

    for(int i=0;i<n;i++) cin>>a[i];
    sortv(a);

    for(int i=0;i<n;i++){
        if(i>0) dp[i]=dp[i-1];
        dp[i]+=a[i];
    }

    ll l=0,r=2e18,ans=2e18;

    while(l<=r){

        ll mid=l+(r-l)/2;

        if(ok(mid,a,dp,n,k)){
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
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


