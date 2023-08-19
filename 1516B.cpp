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
    int n;
    cin>>n;
    ll a[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        ll p1=0,p2=0;
        for(int j=1;j<i;j++) p1^=a[j];
        for(int j=i+1;j<=n;j++) p2^=a[j];

        if(i==1)
        {
            if(a[i]==p2){
                cout<<"YES"<<endl;
                return;
            }
        }
        else if(i==n)
        {
            if(a[i]==p1){
                cout<<"YES"<<endl;
                return;
            }
        }
        else if((p1^a[i])==p2 ||(p2^a[i])==p1){
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;
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

