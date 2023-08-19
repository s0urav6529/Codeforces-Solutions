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

void solve()
{
    ll l,r,d,u;
    cin>>l>>r>>d>>u;
    ll x,y,x1,x2,y1,y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    int yes=1;
    if(l-r>x-x1||r-l>x2-x) yes=0;

    if(d-u>y-y1||u-d>y2-y) yes=0;

    if(x1==x2&&(l+r)>0) yes=0;

    if(y1==y2&&(u+d)>0) yes=0;

    if(yes) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

