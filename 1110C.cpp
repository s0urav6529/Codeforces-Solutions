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
const int limit=10000007;


int vis[limit];

void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4;i<limit;i+=2) vis[i]=1;
    for(int i=3;i*i<limit;i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i;j<limit;j+=2*i)
        {   vis[i]=1;
            if(vis[j]==0) vis[j]=j/i;
        }
    }
    vis[2]=1;
}
void solution(){

    int q;
    cin>>q;
    while(q--){

        ll x;
        cin>>x;
        int r=0,cnt=0;
        bool ok=true;
        for(int i=31;i>=0;i--){

            if((x&(1<<i))){
                if(ok) r=i,ok=false;
                cnt++;
            }
        }
        r++;
        //pp(r,cnt);
        if(r!=cnt){

            ll ans=0;
            for(ll i=0;i<r;i++){
                   ans+=pow(2ll,i);
            }
            cout<<ans<<endl;

        }
        else{

            bool ok=true;
            for(ll i=3;i*i<=x;i+=2){

                if(x%i==0){
                    cout<<x/i<<endl;
                    ok=false;
                    break;
                }

            }
            if(ok) cout<<1<<endl;

        }


    }
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //seive();
    //cin>>tc;
    while(tc--) solution();
    return 0;
}

