#include<bits/stdc++.h>
using namespace std;
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



void solution(){

    int n,m;
    cin>>n>>m;
    vector<int>a[n];
    vector<int>ans[n];

    rep0(i,n){

        rep0(j,m){
            int x;
            cin>>x;
            a[i].pb(x);
        }

        sort(a[i].begin(),a[i].end());
    }

    for(int i=0;i<m;i++){

        ll mn=1e10,idx;
        for(int j=0;j<n;j++){

            if(a[j][0]<mn) {
                mn=a[j][0];
                idx=j;
            }
        }
        for(int j=0;j<n;j++){

            if(j==idx){
                ans[j].pb(a[j][0]);
                a[j].erase(a[j].begin());
            }
            else{
                ans[j].pb(a[j][a[j].size()-1]);
                a[j].pop_back();
            }

        }

    }

     rep0(i,n){

        rep0(j,m){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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



