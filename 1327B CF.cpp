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
    ll n,free_girl=0;
    cin>>n;
    vector<bool>prince(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        ll pss,un_girl=0;cin>>pss;
        while(pss--)
        {
            ll p;cin>>p;
            if(un_girl)continue;
            if(prince[p])continue;
            prince[p]=1;
            un_girl=1;
        }
        if(un_girl==0&&free_girl==0) free_girl=i;
    }
    if(!free_girl)cout<<"OPTIMAL"<<endl;
    else
    {
        cout<<"IMPROVE"<<endl<<free_girl<<" ";
        for(ll i=1;i<=n;i++)
        {
            if(!prince[i]){cout<<i<<endl;break;}
        }
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
