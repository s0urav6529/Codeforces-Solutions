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
#define pno          cout<<"NO"<<endl;
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
    int n;
    cin>>n;
    int msb;
    for(int i=0;i<32;i++){
        if(n&(1<<i)) msb=i;
    }
    string s="0";
    for(int i=1;i<=msb;i++) s+='1';
    int num=0;
    rev(s);
    for(int i=0;i<s.size();i++){
        num+=((s[i]-'0')*pow (2,i));
    }
    cout<<num<<endl;



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


