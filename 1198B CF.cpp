#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
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
ll a[100005];
///*********************************************************///

void solve()
{
    ll n,q,x,mx=INT_MIN;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    cin>>q;
    while(q--)
    {
        ll t;
        cin>>t;
        if(t==1)
        {
            ll pos,px;
            cin>>pos>>px;
            a[pos]=px;
        }
        else
        {
            cin>>x;
            mx=max(mx,x);
        }
    }
    for(ll i=1;i<=n;i++)
    {

        if(a[i]<mx)cout<<mx<<" ";
        else cout<<a[i]<<" ";
    }
    cout<<el;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}





