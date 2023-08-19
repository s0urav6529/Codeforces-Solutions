#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define fr0(p,i,k,z) for (ll i=p ; i<k ; i+=z)
#define fr1(p,i,k,z) for (ll i=p ; i<=k ; i+=z)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;


void solution()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>la(n+1),ra(n+1);
    fr1(1,i,n,1) la[i]=ra[i]=0;
    fr1(1,i,n,1){
        int x;
        cin>>x;
        if(i<=l) la[x]++;
        else ra[x]++;
    }
    for(int i=1;i<=n;i++){
        int mn=min(la[i],ra[i]);
        la[i]-=mn;
        ra[i]-=mn;
    }
    if(l<r){
        swap(l,r);
        swap(la,ra);
    }

    int ans=0;
    int don=l-(n/2);
    ans+=don;
    for(int i=1;i<=n;i++){
        if(!don) break;
        if(la[i]==ra[i]) continue;
        if(la[i]>0){

            int h=la[i]/2;
            int mn=min(don,h);
            la[i]-=mn;
            ra[i]+=mn;
            mn=min(la[i],ra[i]);
            la[i]-=mn;
            ra[i]-=mn;
            don-=mn;
        }
    }
    int rem=0;
    for(int i=1;i<=n;i++){
        rem+=la[i]+ra[i];
    }
    cout<<ans+(rem/2)<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--)
        solution();
    return 0;
}



