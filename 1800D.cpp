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
constexpr ll MOD=1e9+7;
const int limit=1e5+5;

ll inv[limit];
ll dp[limit];

ll moduleInv(ll base,ll Pow){
    ll res=1;

    while(Pow){
        if(Pow&1) res=(res*base)%MOD;
        Pow/=2;
        base=(base*base)%MOD;
    }
    return res;
}

void hashit(string s){

    ll hash_value=0;
    ll Prime=31;
    ll Prime_power=1;
    int n = s.size();

    for(int i=0;i<n;i++) {

        if(i == 0){
            dp[i]=((s[i]-'a'+1)*Prime_power)%MOD;
        }
        else dp[i]=(dp[i-1]+((s[i]-'a'+1)*Prime_power))%MOD;

        inv[i] = moduleInv(Prime_power,MOD-2)%MOD;

        Prime_power=(Prime_power*Prime)%MOD;
    }
    dp[n] = dp[n-1];

}
ll hashvalue(int idx,int n){

    ll res= dp[n] - dp[idx];

    res=(res * inv[2]) % MOD;

    return res;
}


void an1nd1ta(int tc){
    int n;
    string s;
    cin >> n >> s;
    hashit(s);

    set<ll>st;
    for(int i=0;i<n-1;i++){

        ll ans = 0 , temp = 0;
        if(i > 0) ans =dp[i-1] % MOD;
        if(i < n-2) temp = hashvalue(i+1,n) % MOD;
        ans = (ans + temp)%MOD;
        st.insert(ans);
    }
    cout << st.size() <<endl;

    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}