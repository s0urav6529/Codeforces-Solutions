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
vector<pair<ll,ll>>v1;
unordered_map<ll,ll>ump;
map<ll,ll>mp;
set<ll>st;
stack<ll>s;
ll a[1000005];
ll pos[1000005],neg[1000005];
ll n,m,ans=0,sum=0;
/*bool compair(pair<ll,ll>a,pair<ll,ll >b)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
bool SORT(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.ss>b.ss;
}
void solve()
{
    cin>>n;
    bool fre[n];
    v1.pb({0,0});
    for(ll i=1;i<=n;i++)cin>>m,v1.pb({i,m});
    if(v1[1].ss==0)cout<<-1<<endl;
    else
    {
        sort(v1.begin()+2,v1.end(),SORT);
        auto i=v1.begin()+1;
        while(*i>0)
        {
            ll val=*i;
            while(val--)
            {
                //if(fre[])
            }
        }
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






