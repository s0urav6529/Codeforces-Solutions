#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define limit 100005
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int n;
        cin>>n;
        int dp[2][n+2];
        ///cause tetrahedren has two level top(1) and bottom(0)
        dp[1][0]=1; ///  need to go at top with 0 steps is 1;
        dp[0][0]=0; ///  need to go at top with 0 steps is 0;
        for(int i=1;i<=n;i++)
        {
            dp[1][i]=(3ll*dp[0][i-1])%mod;  ///amra top e only 3 ta bottom vertex thekei pochaite parbo
            dp[0][i]=((2ll*dp[0][i-1])%mod+(dp[1][i-1])%mod)%mod;  ///amra bottom e jekono 2 ta bottom vertex and 1 ta top thekei pochaite parbo
        }
        cout<<dp[1][n];
    }
    return 0;
}






