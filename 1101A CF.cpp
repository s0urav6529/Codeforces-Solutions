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
    ll l,r,d,pos;
    cin>>l>>r>>d;
    for(ll i=d;i<l;i+=d)
    {
        if(i%d==0){cout<<i<<el;return;}
    }
    if(r<d)pos=d;
    else if(r%d==0)pos=r+d;
    else pos=((r/d)+1)*d;
    for(ll i=pos;;i+=d)
    {
        if(i%d==0){cout<<i<<el;return;}
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




