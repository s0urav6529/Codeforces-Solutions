#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
void solve()
{
    ll n,cntfirst=0,cntsecond=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='(')cntfirst++;
        else
        {
            cntsecond++;
            if(cntsecond>cntfirst)ans++,cntsecond--;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}



