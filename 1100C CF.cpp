#include<bits/stdc++.h>
#include<cmath>
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
string str;
///*********************Keep Coding****************************
/*bool compair(pair<ll,ll>a,pair<ll,ll>b)///sort the first value decending and second value ascending
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
    //cin>>n;
    ld n,r;
    cin>>n>>r;
    n=360.0/n;
    ld theta=cos(n*pi/180.0);
    ld c=((theta*2.0)*r*r)-(2.0*(r*r));
    ld b=(theta*4.0*r)-(4.0*r);
    ld a=(theta*2.0)+2.0;
    ld ans=(-b+sqrt((b*b)-4*a*c))/(2.0*a);
    cout<<fixed<<setprecision(7)<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;out;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}




