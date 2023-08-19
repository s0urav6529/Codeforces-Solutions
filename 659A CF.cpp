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
ll a[305];
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
    ll p,b,x=1;
    cin>>n>>p>>b;
    for(ll i=1;i<=300;i++)
    {
        a[i]=x;
        x++;
        if(x>n)x=1;
    }
    if(b>0)
    {
        for(ll i=p+1;i<=300;i++)
        {
            if(b==1)
            {
                cout<<a[i];
                return;
            }
            b--;
        }
    }
    else if(b<0)
    {
        ll pos;
        b=abs(b);
        for(ll i=1;i<=300;i++) if(a[i]==p&&i>b)pos=i;
        for(ll i=pos-1;i>0;i--)
        {
            if(b==1)
            {
                cout<<a[i];
                return;
            }
            b--;
        }
    }
    else cout<<p<<endl;
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




