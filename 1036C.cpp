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
#define rep(j,i,k) for (int i=j ; i<k ; i++)
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
constexpr ll MOD=998244353;
const int limit=200005;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

}

ll dp[20][2][4];

ll rec(string num,int len,int tight,int nz){

    if(len==0) return 1;

    if(dp[len][tight][nz]!=-1) return dp[len][tight][nz];

    ll ans=0;

    int upper_digit=9;

    if(tight) upper_digit=num[num.size()-len]-'0';

    for(int digit=0;digit<=upper_digit;digit++){

        if(digit && nz<3) ans+=rec(num,len-1,(tight&(digit==upper_digit)),nz+1);

        if(digit==0) ans+=rec(num,len-1,(tight&(digit==upper_digit)),nz);

    }

    return dp[len][tight][nz]=ans;


}


void run_case(){

    ll l,r;
    cin>>l>>r;l--;

    string ln=to_string(l),rn=to_string(r);

    reset(dp,-1);
    ll R=rec(rn,rn.size(),1,0);

    reset(dp,-1);
    ll L=rec(ln,ln.size(),1,0);


    cout<<R-L<<endl;

    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}


