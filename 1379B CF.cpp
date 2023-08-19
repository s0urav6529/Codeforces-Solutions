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
ll n,m;
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
    ll l,r,m,n1,n2,a,b,c;
    cin>>l>>r>>m;
    for(ll i=l;i<=r;i++)
    {
        n1=m/i,n2=n1+1;
        a=i;
        if(n1)
        {
            b=r;
            ll need=m%(a*n1),req=b-need;
            if(req>=l)
            {
                c=req;
                break;
            }
        }
        if(n2)
        {
            c=r;
            ll need=(a*n2)-m,req=c-need;
            if(req>=l)
            {
                b=req;
                break;
            }
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return;
    ///********************MAKE ALL THE INT LL************************
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}




