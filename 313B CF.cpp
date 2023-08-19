#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll dp[100005];
int main()
{
    fast;
    string s;
    cin>>s;
    ll m;
    cin>>m;
    memset(dp,0,sizeof(dp));
    for(ll i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    while(m--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
    return 0;
}
