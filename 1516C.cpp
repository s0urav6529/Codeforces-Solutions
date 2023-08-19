
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
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

void solution()
{
    int n;
    cin>>n;
    int sum=0;
    int a[n+4];
    int mn=2005,od=0;
    int GCD=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        GCD=__gcd(a[i],GCD);
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]/GCD)&1) od=i+1;
    }
    if(sum&1)
    {
        cout<<0<<endl;
        return;
    }
    sum/=2;
    bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));
    for(int i=0;i<=n;i++)
    for(int j=0;j<=sum;j++)
    {
        if(i==0&&j>0)dp[i][j]=false;
        if(j==0)dp[i][j]=true;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=sum;j++)
    {
        if(a[i-1]<=j)dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
        else dp[i][j]=dp[i-1][j];
    }
    if(dp[n][sum]) cout<<1<<endl<<od<<endl;
    else cout<<0<<endl;

    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}


