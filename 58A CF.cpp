#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
#define el endl;
#define push_back pb;
#define make_pair mp;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx 0;
#define mn 10000000000000;
#define first ft;
#define second snd;
#define inf 1e9
#define linf 1e18
#define eps 1e-9
using namespace std;
typedef vector<int> vi;
typedef vector<long> vl;
typedef map<int,int>mi;
typedef map<long,long>ml;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<long,long>pll;
using ll=long long;
using ld=long double;
ll dp[1005][1005];
int main()
{
    fast;
    string str,s="hello";
    cin>>str;
    ll n=str.length(),m=s.length();
    for(ll i=0;i<=n;i++)
    for(ll j=0;j<=m;j++)if(i==0||j==0)dp[i][j]=0;
    for(ll i=1;i<=n;i++)
    for(ll j=1;j<=m;j++)
    {
        if(str[i-1]==s[j-1])dp[i][j]=1+dp[i-1][j-1];
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
    if(dp[n][m]==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
