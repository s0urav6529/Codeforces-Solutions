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
ll nCr(int n, int r)
{
    ll p=1,k=1;
    if (n-r<r)
        r=n-r;
    if (r!=0) {
        while (r) {
            p *= n;
            k *= r;
            ll m =__gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p=1;
    return p;
}
void solution()
{
    ll n;
    cin>>n;
    ll a[n+5];
    map<ll,ll>mp;
    for(int i=1;i<=n;i++){
            cin>>a[i];
            ll dif=a[i]-i;
            //cout<<dif<<endl;
            mp[dif]++;
    }
    ll ans=0;
    for(auto i:mp){
        ll x=i.ss;
        //cout<<x<<endl;
        if(x<2) continue;
        ans+=nCr(x,2ll);
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
    while(tc--)
        solution();
    return 0;
}
 
