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
ll a[305][305];
///*********************************************************///

void solve()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    for(ll j=1;j<=m;j++) cin>>a[i][j];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            ll all=0;
            if(i-1>=1)all++;
            if(i+1<=n)all++;
            if(j-1>=1)all++;
            if(j+1<=m)all++;
            if(a[i][j]>all)
            {
                cout<<"NO"<<endl;
                return;
            }
            a[i][j]=all;
        }
    }
    cout<<"YES"<<endl;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}



