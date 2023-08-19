#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll ans=0,FIND=1;
        cin>>s;
        ll pre[s.length()+2];
        if(s[0]=='+')pre[0]=1;
        else pre[0]=-1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='+')pre[i]=pre[i-1]+1;
            else pre[i]=pre[i-1]-1;
        }
        for(ll i=0;i<=s.length();i++)
        {
            if(pre[i]==(-1*FIND)&&i<s.length())ans+=i+1,FIND++;
            if(i==s.length()){ans+=s.length();}
        }
        cout<<ans<<endl;
    }
    return 0;
}

