#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx INT_MIN
#define mn INT_MAX
#define ff first;
#define ss second;
#define inf 1e9
#define linf 1e18
#define eps 1e-9
#define el endl;
using namespace std;
typedef vector<int> vi;
typedef map<int,int>mi;
typedef map<long,long>ml;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<long,long>pll;
using ll=long long;
using ld=long double;
ll a[10000005];
vector<pair<ll,ll>> vl;
ll s,b;
ll solve(ll val)
{
    ll l=0,r=b-1,ans=0;
    while(l<=r)
    {
        ll mid=l+((r-l)/2);
        if(vl[mid].first<=val)ans=max(ans,vl[mid].second),l=mid+1;
        else r=mid-1;
    }
    return ans;
}
int main()
{
    fast;
    ll x,y;
    cin>>s>>b;
    for(ll i=0;i<s;i++)cin>>a[i];
    for(int i=0;i<b;i++)
    {
        cin>>x>>y;
        vl.push_back({x,y});
    }
    sort(vl.begin(),vl.end());
    for(int i=1;i<b;i++)
    {
        vl[i].second=vl[i-1].second+vl[i].second;
    }
    for(ll i=0;i<s;i++)
    {
        cout<<solve(a[i])<<" ";
    }
    cout<<endl;
    return 0;
}


