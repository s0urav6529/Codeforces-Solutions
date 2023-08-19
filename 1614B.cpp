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
#define p(a)         cout<<a<<endl;
#define pp(a,b)      cout<<a<<" "<<b<<endl;
#define ppp(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl;
#define nl           cout<<endl;
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



bool compair(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b){

    return a.ff.ss<b.ff.ss;
}
void solution(){

    int n;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>>a(n);
    rep0(i,n){

        cin>>a[i].ff.ff;
        a[i].ff.ss=i;
    }
    sortv(a);
    rev(a);
    ll m=0,p=0,ans=0,mm=0,pp=0;
    rep0(i,n){

        if(i&1){
            p++;
            pp--;
            a[i].ss=(a[i].ff.ff*2*p);
            ans+=(a[i].ff.ff*2*p);
            a[i].ff.ff=pp;
        }
        else  {

            m++;
            mm++;
            a[i].ss=(a[i].ff.ff*2*m);
            ans+=(a[i].ff.ff*2*m);
            a[i].ff.ff=mm;

        }

    }
    sort(a.begin(),a.end(),compair);
    cout<<ans<<endl;
    cout<<0<<" ";
    rep0(i,n){
        cout<<a[i].ff.ff<<" ";
    }
    cout<<endl;
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

