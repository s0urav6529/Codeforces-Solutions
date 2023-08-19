#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen  ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=1e5+5;

ll fact[limit], inv_f[limit];
void precompute() {

  /// first calucalte i^(-1)
  inv_f[0] = inv_f[1] = 1;
  for(int i = 2; i < limit; i++){
       inv_f[i] = MOD - 1LL * (MOD / i) * inv_f[MOD % i] % MOD;
  }

  /// Calculate factorial & Inverse factorial (i^(-1))!
  fact[0] = fact[1] = 1;
  for(int i = 2; i < limit; i++){
       fact[i] = (1LL * fact[i-1] * i) % MOD;
       inv_f[i] = (1LL * inv_f[i] * inv_f[i-1]) % MOD;
  }

}

ll nCr(ll n, ll r) {
    if(r > n) return 0;
    return (((1LL * fact[n] * inv_f[n-r]) % MOD) * inv_f[r]) % MOD;
}

void an1nd1ta(int tc){
    
    int n;
    cin >> n;
    int a[n+3];
    for(int i=1;i<=n;i++){
    	cin >> a[i];

    }
    ll ans = 1;

    for(int i=3;i<=n;i+=3){
    	
    	int mn = min(a[i],min(a[i-1],a[i-2]));
    	ll cnt = 0;

    	if(mn == a[i]) cnt++;
    	if(mn == a[i-1]) cnt++;
    	if(mn == a[i-2]) cnt++;

    	ans = (ans * cnt)%MOD;

    }

    ans = (ans * nCr(n/3,n/6)) % MOD;

    cout << ans <<endl;


    return;
}

int main(){
    fast;
    precompute();
    int testcase=1;
    //cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}