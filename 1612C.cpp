#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
const int limit=100005;

ll ok(ll mid,ll xx){

    ll tot=(mid*(mid+1))/2;

    if(tot-mid<xx) return true;
    return false;

}

ll ok2(ll m,ll xx,ll nn){

    ll tot=(nn*(nn+1))/2;

    ll rr=tot-xx;

    ll ff=(m*(m+1))/2;
    if(ff<=rr) return true;
    return false;



}

void solution(){

    ll n,x;
    cin>>n>>x;

    ll tot=(n*(n+1))/2;

    if(tot<x){
        ll ans=n;
        x=x-tot;
        ll t=(n*(n-1))/2;
        if(x>=t){
            ans+=(n-1);
            cout<<ans<<endl;
            return;
        }
        else{
            ll l=1,r=n-1,aa=1;

            while(l<=r){
                ll m=l+(r-l)/2;

                if(ok2(m,x,n-1)){
                    umax(aa,m);
                    l=m+1;
                }
                else r=m-1;

            }

            ans+=(n-1-aa);
            cout<<ans<<endl;
            return;

        }
    }
    else{

        ll l=1,r=n,ans=1;

        while(l<=r){
            ll m=l+(r-l)/2;

            if(ok(m,x)){
                umax(ans,m);
                l=m+1;
            }
            else r=m-1;

        }
        cout<<ans<<endl;
    }
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

