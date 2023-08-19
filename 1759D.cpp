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
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
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
constexpr ll MOD=1000000007;
const int limit=1e6+5;


void run_case(){

    ll n, m;
    cin >> n >> m;
    ll N=n;
    while(n%10==0){
        n/=10;
    }

    ll cnt=0 ,val=1;

    swap(n,N);

    //cout<<n<<" "<<N<<endl;

    while(N%5LL==0){
        cnt++;
        N/=5LL;
    }
    while(cnt--){
        if(val*2LL>m) break;
        n*=2LL;
        val*=2LL;
    }
    cnt=0;
    while(N%2LL==0){
        cnt++;
        N/=2LL;
    }
    while(cnt--){
        if(val*5LL>m) break;
        n*=5LL;
        val*=5LL;
    }

    while(val*10LL <= m){
        n*=10LL;
        val*=10LL;
    }
    ll mul=m/val;
    n*=mul;
    cout<<n<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

