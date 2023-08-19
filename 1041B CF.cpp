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
multiset<ll>ms;
ll a[1000005];
void solve()
{
    ll a , b, x, y;
    cin>>a>>b>>x>>y;
    ll div=__gcd(x,y);
    x/=div,y/=div;
    x=a/x,y=b/y;
    cout<<min(x,y)<<endl;

    return;
}
int main()
{
    fast;
    solve();
    return 0;
}






