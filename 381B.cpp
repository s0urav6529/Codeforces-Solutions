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
int cnt[5005];
void solution()
{
    int n,mx=1,mn=50001;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
        umax(mx,x);
        umin(mn,x);
    }
    for(int i=mn;i<=mx;i++)
        if(cnt[i]) v.pb(i),cnt[i]--;

    for(int i=mx-1;i>=mn;i--)
    if(cnt[i]) v.pb(i),cnt[i]--;

    cout<<v.size()<<endl;
    for(auto i:v) cout<<i<<" ";
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--)
        solution();
    return 0;
}


