
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
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
#define p3f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=1e6+5;

bool vis[limit];
vector<ll>prime;
void seive(){

    vis[0]=vis[1]=1;

    for(int i=4; i<limit; i+=2) vis[i] = 1;

    for(int i=3; i*i<limit; i+=2){

        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i) {

            vis[j] = 1;
        }
    }

    prime.pb(2);

    for(int j=3; j<limit; j+=2){
    	if(vis[j]==0) prime.pb(j);
    }
}

ll Inclusion_exclusion(ll val , ll range){

    vector<ll>b;
    for(int j=0;prime[j]*prime[j]<=val;j++){

        bool ok=false;

        while(val%prime[j]==0){
            val/=prime[j];
            ok=true;
        }

        if(ok){
            b.pb(prime[j]);
        }

    }
    if(val>1) b.pb(val);

    int len = b.size();

    ll res=range;

    for(int mask=1;mask<(1<<len);mask++){

        ll N=1,cnt=0;

        for(int bit=0;bit<len;bit++){

            if((mask & ( 1 << bit ))){

                cnt++;
                N*=b[bit];
            }
        }
        if(cnt&1) res -= (range/N);
        else res += (range/N);
    }
    return res%MOD;

}


void run_case(){
    ll n,m;
    cin >> n >> m;

    ll a[n+5];
    bool ok=true;

    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(i>1 && (a[i-1]%a[i])) ok=false;
    }

    if(ok==false){
        cout<<0<<endl;
        return;
    }

    ll ans=1;

    for(int i=2;i<=n;i++){

        ans = ( ans * Inclusion_exclusion(a[i-1]/a[i]   , m/a[i]) ) % MOD;

    }
    cout<<ans<<endl;

    return;
}

int main(){
    fast;
    seive();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
