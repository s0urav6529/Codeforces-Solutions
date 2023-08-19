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
stack<ll>s;
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
    cin>>n;
    bool fre[n];
    for(ll i=1;i<=n;i++)cin>>a[i],fre[a[i]]=1;
    for(ll i=n;i>0;i--)s.push(a[i]);
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        ll ans=0;
        if(fre[a[i]]==1)
        {
            while(s.top()!=a[i])
            {
                fre[s.top()]=0;
                s.pop();
                ans++;
            }
            if(s.top()==a[i])
            {
                fre[s.top()]=0;
                s.pop();
                ans++;
            }
        }
        else ans=0;
        cout<<ans<<" ";
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





