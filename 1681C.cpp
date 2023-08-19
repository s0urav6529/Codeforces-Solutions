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
const int limit=10001;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

}


void run_case(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    vector<pair<int,int>>ans;

    for(int i=1;i<limit;i++){

        bool aget=0,aeq=0,bget=0,beq=0,asml=0,bsml=0;
        int cnt=0;
        for(int j=1;j<n;j++){

            if(a[j-1]>a[j]) aget=1;
            else if(a[j-1]==a[j]) aeq=1;
            else asml=1;

            if(b[j-1]>b[j]) bget=1;
            else if(b[j-1]==b[j]) beq=1;
            else bsml=1;

            if((aget && (bget || beq))||(bget && (aget || aeq))){
                swap(a[j-1],a[j]);
                swap(b[j-1],b[j]);
                ans.pb({j,j+1});

            }
            else if((aget && bsml) || (bget && asml)){
                cout<<-1<<endl;
                return;
            }
            aget=0,bget=0,aeq=0,beq=0,asml=0,bsml=0;
        }
        bool ok=true;
        for(int j=1;j<n;j++) {
            if(a[j-1]>a[j] || b[j-1]>b[j]) ok=false;
        }
        if(ok){
            cout<<ans.size()<<endl;
            for(auto k:ans) cout<<k.ff<<" "<<k.ss<<endl;
            return;

        }
    }
    cout<<-1<<endl;

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


