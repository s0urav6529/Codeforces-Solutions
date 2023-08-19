#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
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
    ll n;cin>>n;
    if(n<2050)
    {
        cout<<-1<<endl;
        return;
    }
    int mv=0;
    while(1)
    {
        ll x=1,tmp=1;
        int i=0;
        mv++;
        while(x<=n)
        {
            tmp=x;
            x=(2050*pow(10,i));
            i++;
        }
        cout<<tmp<<" "<<n<<endl;
        n-=tmp;
        if(n==0)
        {
            cout<<mv<<endl;
            return;
        }
        if(n<2050)
        {
            cout<<-1<<endl;
            return;
        }
    }
    return;
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


