#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans=0,psum,ssum;
        cin>>n>>k;
        string s;
        cin>>s;
        ll pre[n+1],suf[n+1];

        memset(pre,-1,sizeof(pre));
        memset(suf,-1,sizeof(suf));

        if(s[0]-'0'==1) pre[0]=0;///we have no index such -1;
        for(ll i=1;i<n;i++)
        {
            if(s[i]-'0'==1)pre[i]=i;
            else pre[i]=pre[i-1];
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]-'0'==1)suf[i]=i;
            else suf[i]=suf[i+1];
        }
        for(ll i=0;i<n;i++)
        {
            psum=ssum=INT_MAX;
            if(pre[i]!=-1) psum=i-pre[i];

            if(suf[i]!=-1) ssum=suf[i]-i;

            if(min(psum,ssum)>k)ans++,pre[i]=i;

            if(pre[i+1]<pre[i])pre[i+1]=pre[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}


