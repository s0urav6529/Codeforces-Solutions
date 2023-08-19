#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx INT_MIN
#define mn INT_MAX
//#define ff first;
//#define ss second;
#define inf 1e9
#define linf 1e18
#define eps 1e-9
#define el endl;
using namespace std;
using ll=long long;
using ld=long double;
ll divisor[10000005];
vector<pair<ll,ll>>vp;
int main()
{
    for(ll i=2;i<=10000000;i++)
    {
        if(divisor[i]==0)
        {
            divisor[i]=i;
            for(ll j=i*i;j<=10000000;j+=i) divisor[j]=i;///smallest divisor of j is i;
        }
    }
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll in;
        cin>>in;
        ll p=divisor[in];
        ll x=in,d1=1,d2;
        while(x%p==0)
        {
            x/=p;
            d1*=p;
        }
        d2=in/d1;
        if(d1>1&&d2>1&&__gcd(d1,d2)==1)
             vp.push_back({d1,d2});
        else vp.push_back({-1,-1});
    }
    for(auto it:vp)cout<<it.first<<" ";
    cout<<endl;
    for(auto it:vp)cout<<it.second<<" ";
    cout<<endl;
    return 0;
}


