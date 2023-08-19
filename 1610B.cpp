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
const int limit=200005;

void init_code() {

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}

bool check(int n,vector<int>a,int rem){

    int i=0,j=n-1;
    while(i<=j){
        if(a[i]!=a[j]){
            if(a[i]==rem) i++;
            else if(a[j]==rem) j--;
            else return false;
        }
        else i++,j--;
    }
    return true;
}


void run_case(){
    int n;
    cin>>n;
    vector<int>a(n);
    rep0(i,n) cin>>a[i];
    bool ok=true;

    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            ok=false;
            if(check(n,a,a[i])){
                pyes;
                return;
            }
            else if(check(n,a,a[n-i-1])){
                pyes;
                return;
            }
            else {
                pno;
                return;
            }
        }
    }
    pyes;
    return;
}
int main()
{
    fast;
    init_code();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}



