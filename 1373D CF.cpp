#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[10000005];
void solve()
{
    ll n,esum=0,MAX1=0,MAX2=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(!(i&1))esum+=a[i];
    }
    ll msf=0;
    for(ll i=0;i<n;i+=2)
    {
        if(i+1<n) msf+=(a[i+1]-a[i]);
        MAX1=max(MAX1,msf);
        if(msf<0)msf=0;
    }
    msf=0;
    for(ll i=1;i<n;i+=2)
    {
        if(i+1<n) msf+=(a[i]-a[i+1]);
        MAX2=max(MAX2,msf);
        if(msf<0)msf=0;
    }
    ll MAX=max(MAX1,MAX2);
    cout<<esum+MAX<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}


