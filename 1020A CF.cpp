#include<bits/stdc++.h>
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
vector<ll>v1,v2;
unordered_map<ll,ll>ump;
map<ll,ll>mp;
set<ll>st;
ll a[1000005];
ll pos[1000005],neg[1000005];
ll n,m;
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
void solve()
{
    ll h,a,b,q,t1,t2,f1,f2;
    cin>>n>>h>>a>>b>>q;
    while(q--)
    {
        ll ans=0;
        cin>>t1>>f1>>t2>>f2;
        ans=abs(t2-t1);
        if(ans==0) ans=abs(f1-f2);
        else if(f1>=a&&f1<=b) ans+=abs(f1-f2);
        else
        {
            if(f1<a) ans+=abs(a-f1)+abs(a-f2);
            else ans+=abs(b-f1)+abs(b-f2);
        }
        cout<<ans<<endl;
    }
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




