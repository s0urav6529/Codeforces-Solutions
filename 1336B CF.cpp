#include<bits/stdc++.h>
#include<math.h>
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
ll ra[10000005];
ll ba[10000005];
ll ga[10000005];
ll solveg(ll x,ll n)
{
    ll l=0,r=n-1,got=INT_MAX,ret=-1,dif;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ga[mid]==x) return mid;
        if(x>ga[mid])
        {
            dif=abs(x-ga[mid]);
            got=min(got,dif);
            if(dif==got)ret=mid;
            l=mid+1;
        }
        else
        {
            dif=abs(x-ga[mid]);
            got=min(got,dif);
            if(dif==got)ret=mid;
            r=mid-1;
        }
    }
    return ret;
}
ll solveb(ll x,ll n)
{
    ll l=0,r=n-1,got=INT_MAX,ret=-1,dif;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ba[mid]==x) return mid;
        if(x>ba[mid])
        {
            dif=abs(x-ba[mid]);
            got=min(got,dif);
            if(dif==got)ret=mid;
            l=mid+1;
        }
        else
        {
            dif=abs(x-ba[mid]);
            got=min(got,dif);
            if(dif==got)ret=mid;
            r=mid-1;
        }
    }
    return ret;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll nr,ng,nb,ans=3e18;
        cin>>nr>>ng>>nb;
        for(ll i=0;i<nr;i++)cin>>ra[i];
        for(ll i=0;i<ng;i++)cin>>ga[i];
        for(ll i=0;i<nb;i++)cin>>ba[i];
        sort(ga,ga+ng);
        sort(ba,ba+nb);
        for(ll i=0;i<nr;i++)
        {
            ll x=ra[i];
            ll y=solveg(x,ng);
            ll z=solveb(x,nb);
            ll cal=pow(abs(x-ga[y]),2)+pow(abs(ga[y]-ba[z]),2)+pow(abs(ba[z]-x),2);
            ans=min(ans,cal);
        }
        cout<<ans<<endl;
    }
    return 0;
}
