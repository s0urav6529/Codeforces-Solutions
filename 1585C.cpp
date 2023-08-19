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

ll solve(vector<int>&a,int finish,int k){

    ll ans=0,mx;;
    int last=1,x=0;
    for(int i=0;i<a.size();i++){

        x++;
        if(x==1) mx=a[i];
        if(x==k){
            if(finish && last){
                ans+=mx;
                last=0;
            }
            else{
                ans+=(2*mx);
            }
            x=0;
        }
    }

    if(finish && last && x){
        ans+=mx;
    }
    else if(x){
        ans+=(mx*2);
    }
    return ans;
}

void solution(){

    int n,k;
    cin>>n>>k;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<0) a.pb(abs(x));
        else if(x>0) b.pb(x);
    }
    sortv(a);
    sortv(b);
    rev(a),rev(b);
    int as=a.size(),bs=b.size();

    ll ans=1e17,tot=0;

    if(as) tot=solve(a,0,k);
    if(bs) tot+=solve(b,1,k);

    ans=min(ans,tot);
    tot=0;
    if(bs) tot=solve(b,0,k);
    if(as) tot+=solve(a,1,k);
    cout<<min(ans,tot)<<endl;
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

