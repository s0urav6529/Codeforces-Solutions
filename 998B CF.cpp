#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v1,v2;
unordered_map<ll,ll>ump;
map<ll,ll>mp;
set<ll>st;
ll a[1000005];
ll pos[1000005],neg[1000005];
ll n,m,ans=0,sum=0;
/*bool compair(pair<ll,ll>a,pair<ll,ll b>)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    cin>>n>>m;
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll odd=0,even=0,AO=n/2,AE=n/2;
    for(int i=1;i<=n;i++)
    {
        if(a[i]&1)odd++;
        else even++;
        if(odd==even&&((AO-odd)==(AE-even))&&(i<n-1))   v1.pb(abs(a[i]-a[i+1]));
    }
    sort(v1.begin(),v1.end());
    if(v1.empty())  cout<<0<<endl;
    else
    {
        for(auto i:v1)
        {
            if(sum+i<=m)
            {
                sum+=i;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return;
    ///********************MAKE ALL THE INT LL************************
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}




