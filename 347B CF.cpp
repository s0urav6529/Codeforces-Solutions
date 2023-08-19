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
//vector<ll>v1,v2;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>st;
ll a[1000005];
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
    ll fixed=0,one=0,two=0;
    cin>>n;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        if(a[i]==i) fixed++;
        else
        {
            ll pos1=a[i];
            ll pos2=a[pos1];
            if(i==pos2) two=2;
            else one=1;
        }
    }
    if(two==0)cout<<fixed+one<<endl;
    else cout<<fixed+two<<endl;

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




