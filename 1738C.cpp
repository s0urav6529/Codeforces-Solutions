#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
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
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=1e2+5;


ll n;
ll dp[3][3][limit][limit];

ll rec(bool alice,bool sum, ll even,ll odd){

    if(odd+even == 0) {
        if(sum) return 0;
        else return 1;
    }

    if(dp[alice][sum][even][odd] !=-1) return dp[alice][sum][even][odd];

    if(alice){

        ll ans1 =0 , ans2 =0;

        if(even > 0) ans1 = rec(alice^1 , sum , even-1, odd);
        if(odd > 0)  ans2 = rec(alice^1 , sum^1 , even ,odd-1);

        return dp[alice][sum][even][odd] =  max(ans1 , ans2);

    }
    else{

        ll ans1 =1 , ans2 =1;

        if(even > 0) ans1 = rec(alice^1 , sum , even-1, odd);
        if(odd > 0)  ans2 = rec(alice^1 , sum , even ,odd-1);

        return dp[alice][sum][even][odd] =  min(ans1 , ans2);

    }


}


void run_case(){

    ll odd=0 , even=0;
    cin >> n;

    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
        if(x&1) odd++;
        else even++;
    }

    memset(dp,-1,sizeof dp);

    if(rec(1,0,even,odd)== 1) cout<<"Alice" <<endl;
    else cout<<"Bob"<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

