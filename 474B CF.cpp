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
typedef vector<long> vl;
typedef map<int,int>mi;
typedef map<long,long>ml;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<long,long>pll;
using ll=long long;
using ld=long double;
ll a[1000005];
ll n;
ll solve(ll val)
{
    ll l=1,r=n;
    while(l<=r)
    {
        ll mid=l+((r-l)/2);
        if(val>a[mid-1]&&val<=a[mid])return mid;
        else if(val>a[mid])l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int main()
{
    fast;
    ll m;
    cin>>n;
    a[0]=0;
    for(ll i=1;i<=n;i++){cin>>a[i];a[i]+=a[i-1];}
    cin>>m;
    while(m--)
    {
        ll x;
        cin>>x;
        cout<<solve(x)<<endl;
    }
    return 0;
}
