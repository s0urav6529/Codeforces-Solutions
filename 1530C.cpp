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
const int limit=100001;

void solution(){
    int n;
    cin>>n;
    int a[n+2],b[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);


    int ca[n+2],cb[n+2];
    ca[0]=0,cb[0]=0;

    for(int i=1;i<=n;i++) ca[i]=a[i]+ca[i-1];
    for(int i=1;i<=n;i++) cb[i]=b[i]+cb[i-1];

    int l=0,r=1e9,k=n,ans=1e9;

    while(l<=r){

        int mid=(r+l)/2;
        k=n+mid;
        int need=k-(k/4);

        ll take=min(need,mid);
        ll rest=need-take;
        ll costa=(take*100)+(ca[n]-ca[n-rest]);


        take=min(need,n);
        ll costb=(cb[n]-cb[n-take]);

        if(costa>=costb){
            r=mid-1;
            ans=min(ans,mid);
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
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


