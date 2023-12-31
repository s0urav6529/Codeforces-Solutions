
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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
typedef long long int ll;
typedef unsigned long long int llu;
typedef long double ld;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}


void run_case(){

    int n,q;
    cin>>n>>q;
    vector<ll>a(n+1);
    vector<ll>pref(n+5,0),suff(n+5,0);

    pref[0]=suff[n+1]=0;

    for(int i=1;i<=n;i++) {cin>>a[i];}

    for(int i=2;i<=n;i++){

       pref[i]+=pref[i-1]+max(0ll,a[i-1]-a[i]);

    }

    for(int i=n-1;i>=1;i--){

        suff[i]+=suff[i+1]+max(0ll,a[i+1]-a[i]);

    }

    while(q--){

        int a,b;
        cin>>a>>b;

        if(a>b){

            //ppf(suff[a],suff[b]);
            cout<<suff[b]-suff[a]<<endl;
        }
        else{
            //ppf(pref[b],pref[a-1]);
            cout<<pref[b]-pref[a]<<endl;

        }

    }

    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}


