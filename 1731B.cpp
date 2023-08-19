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
constexpr ll MOD=1000000007;
const int limit=1e5+5;



ll Mod(ll x){
    return ((x%MOD + MOD)%MOD);
}

ll mulmod(ll a,ll b){
    return Mod(Mod(a)*Mod(b));
}

ll Binary_expo(ll a,ll p){

 	ll res=1;
	while(p){

	    if(p & 1){
		res=mulmod(res,a);
	    }
	    a=mulmod(a,a);
	    p = (p >> 1);
	}
	return res%MOD;
}

void an1nd1ta(int tc){
    ll n;
    cin >>  n;

    ll x = Mod(n);
    ll y = Mod(n+1LL);
    ll z = Mod(2LL*n);
    z = Mod(z+1LL);

    x = Mod(x*y);
    x = Mod(x*z);

    ll inv = Binary_expo(6LL,MOD-2LL);

    x = Mod(x*inv);

    x = Mod(x+x);

    ll a = Mod(Mod(n) * Mod(n+1LL));

    ll b = Binary_expo(2LL,MOD-2LL);

    a = Mod(a*b);

    x = Mod(x-a);
    x = Mod(x*2022LL);
    cout<<x<<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}
