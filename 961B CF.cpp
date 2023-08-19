#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
//#define mx INT_MIN
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

int main()
{
    fast;
    ll n,k,sum=0,s,e,mx=0;
    cin>>n>>k;
    ll a[n+5],t[n+5];
    a[0]=0;
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll prefix=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]){sum+=a[i];a[i]=prefix;}
        else
        {
            a[i]=prefix+a[i];
            prefix=a[i];
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(!t[i])
        {
            ll cut;
            if(i+k-1<n) cut=a[i+k-1]-a[i-1];
            else cut=a[n]-a[i-1];
            mx=max(cut,mx);
        }
    }
    cout<<sum+mx<<endl;
    return 0;
}
