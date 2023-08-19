
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

void run_case(){

    int n,m;
    cin>>n>>m;
    int a[n+5][m+5];
    rep(1,i,n+1) {
        rep(1,j,m+1) {
            cin>>a[i][j];
        }
    }

    bool ok=true;
    rep(1,i,n+1) {
        rep(2,j,m+1) {
            if(a[i][j]<a[i][j-1]) ok=false;
        }
    }
    if(!ok){

        int px=0,py=0,mn=0;
        vector<int>b(m+1);
        rep(1,i,n+1) {
            rep(1,j,m+1) {
                b[j]=a[i][j];
            }

            sortv(b);

            for(int j=1;j<=m;j++){

                if(a[i][j]!=b[j]){

                    px=i;
                    py=j;
                    mn=b[j];
                    break;
                }
            }
            if(px && py) break;
        }

       //pppf(px,py,mn);



        for(int k=py+1;k<=m;k++){
            ok=true;
            if(a[px][k]==mn){

                //ppf(px,k);

                for(int l=1;l<=n;l++) swap(a[l][py],a[l][k]);

                for(int i=1;i<=n;i++){

                    for(int j=2;j<=m;j++){

                        if(a[i][j]<a[i][j-1]){
                            ok=false;
                            break;
                        }

                    }
                    if(!ok) break;
                }
                if(ok) {
                    cout<<py<<" "<<k<<endl;
                    return;
                }
                else {
                    for(int l=1;l<=n;l++) swap(a[l][py],a[l][k]);
                }
            }

        }
        cout<<-1<<endl;

    }
    else cout<<1<<" "<<1<<endl;


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

