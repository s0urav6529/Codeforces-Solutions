#include<bits/stdc++.h>
#include<math.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
#define Mod 1000000007
using namespace std;
using ll=long long;
using ld=long double;
//vector<ll>v1,v2;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>st;
//ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n,m;
ll nr[1000005],ng[1000005],nb[1000005];
///*********************DONOT CARE ABOUT RATING****************************
/*bool compair(pair<ll,ll>a,pair<ll,ll b>)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
ll bestof2(ll v1,ll v2,ll ov)
{
    if(abs(ov-v1)<abs(ov-v2))return v1;
    return v2;
}
ll getval(ll len,ll val,ll a[])
{
    ll l=0,r=len-1,mid=0;
    if(val<=a[l])return a[0];
    if(val>=a[r])return a[r];
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(a[mid]==val)return a[mid];
        else if(val<a[mid])
        {
            if(mid>0&&val>a[mid-1])
            {
                return bestof2(a[mid],a[mid-1],val);
            }
            r=mid-1;
        }
        else
        {
            if(mid<len-1&&val<a[mid+1])
            {
                return bestof2(a[mid],a[mid+1],val);
            }
            l=mid+1;
        }
    }
    return a[mid];
}
void solve()
{
    ll r,g,b;
    cin>>r>>g>>b;
    for(ll i=0;i<r;i++)cin>>nr[i];
    for(ll i=0;i<g;i++)cin>>ng[i];
    for(ll i=0;i<b;i++)cin>>nb[i];
    sort(nr,nr+r);
    sort(ng,ng+g);
    sort(nb,nb+b);
    ll minwight=LLONG_MAX,temp=0;
    for(ll i=0;i<r;i++)
    {
        ll red=nr[i];
        ll green=getval(g,red,ng);
        ll blue=getval(b,red,nb);
        temp+=pow(abs(red-green),2)+pow(abs(green-blue),2)+pow(abs(blue-red),2);
        minwight=min(minwight,temp);
        temp=0;
    }
    for(ll i=0;i<g;i++)
    {
        ll green=ng[i];
        ll red=getval(r,green,nr);
        ll blue=getval(b,green,nb);
        temp+=pow(abs(red-green),2)+pow(abs(green-blue),2)+pow(abs(blue-red),2);
        minwight=min(minwight,temp);
        temp=0;
    }
    for(ll i=0;i<b;i++)
    {
        ll blue=nb[i];
        ll green=getval(g,blue,ng);
        ll red=getval(r,blue,nr);
        temp+=pow(abs(red-green),2)+pow(abs(green-blue),2)+pow(abs(blue-red),2);
        minwight=min(minwight,temp);
        temp=0;
    }
    cout<<minwight<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;out;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
