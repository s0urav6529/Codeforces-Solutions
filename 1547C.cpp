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
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=1000001;

void solution(){
    int l,n,m;
    cin>>l>>n>>m;
    int a[n+2],b[m+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];

    vector<int>ans;
    int p=1,q=1;
    while(1){

        while(p<=n){
            if(a[p]==0) {
                ans.pb(a[p]);
                l++;
                p++;
            }
            else if(a[p]<=l){
                ans.pb(a[p]);
                p++;
            }
            else break;
        }
        while(q<=m){
            if(b[q]==0) {
                ans.pb(b[q]);
                l++;
                q++;
            }
            else if(b[q]<=l){
                ans.pb(b[q]);
                q++;
            }
            else break;
        }
        if(p>n && q>m) break;

        if(a[p]>l && b[q]>l){
            cout<<-1<<endl;
            return;
        }
        if(p>n && b[q]>l){
            cout<<-1<<endl;
            return;
        }
        if(q>m && a[p]>l){
            cout<<-1<<endl;
            return;
        }

    }
    for(auto i:ans) cout<<i<<" ";
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


