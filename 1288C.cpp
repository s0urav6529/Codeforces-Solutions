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
#define pno          cout<<"NO"<<endl;
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
const int limit=2000;

ll fact[limit];
void cal_factorial(){

    fact[0]=fact[1]=1;

    for(int i=2;i<=limit;i++)
        fact[i]=(fact[i-1]*i)%MOD;

}

ll power(ll a,ll n) ///moduler exponentiation
{
    ll res=1;
    while(n)
    {
        if(n&1) res=(res*a)%MOD;

        a=(a*a)%MOD;
        n/=2;
    }
    return res;
}

ll nCr(ll n,ll r)
{
    if(r>n) return 0;

    ///n!/(r!-(n-r)!)

    ll res=fact[n];

    res=(res*power(fact[r],MOD-2))%MOD;     ///we need no modolu inverse of it because divide need module inverse

    res=(res*power(fact[n-r],MOD-2))%MOD;   ///we need no modolu inverse of it

    return res;
}
void solution(){

    ll n,m;
    cin>>n>>m;
    cout<<nCr(2*m+n-1,n-1)<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    cal_factorial();
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}


