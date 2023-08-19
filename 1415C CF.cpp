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
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int n,p,k,x,y;
        string s;
        cin>>n>>p>>k>>s>>x>>y;
        ll dp[n+5];
        p--;
        ll ans=1e17;
        for(int i=n-1;i>=p;i--)
        {
            dp[i]=x*(1-(s[i]-'0'));
            if(i+k<n) dp[i]+=dp[i+k];
            ans=min(ans,(i-p)*y+dp[i]);
        }
        cout<<ans<<endl;

    }
    return 0;
}





