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
        ll n,k1,k2,ans=0;
        cin>>n>>k1>>k2;
        string str;
        cin>>str;
        for(ll i=0;i<str.length();i++)
        {
            if(str[i]=='1'&&str[i+1]=='1')ans+=k2,i++;
            else if(str[i]=='0');
            else ans+=k1;
        }
        cout<<ans<<endl;

    }
    return 0;
}

