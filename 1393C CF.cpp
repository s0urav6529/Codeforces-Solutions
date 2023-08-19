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
ll a[100005];
vector<pair<ll,ll>>v;
//ll pos[1000005],neg[1000005];
ll n,m;
string str;
///*********************Keep Coding****************************
bool compair(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.ss==b.ss)return a.ff<b.ff;
    return a.ss>b.ss;
}
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    v.clear();
    cin>>n;
    ll freq[n+2];
    memset(freq,0,sizeof(freq));
    for(ll i=0;i<n;i++)
    {
        cin>>m;
        freq[m]++;
    }
    for(ll i=1;i<=n;i++) v.pb({i,freq[i]});
    sort(v.begin(),v.end(),compair);
    ll Not_max=0,total_max=0;
    auto i=v.begin();
    ll ok=i->ss;
    for(auto i:v)
    {
        if(i.ss==0)break;
        if(i.ss>=ok) total_max++;
        else Not_max++;
    }
    //cout<<ok<<" "<<total_max<<" "<<Not_max<<endl;
    if(total_max==1)
    {
        ll distance=(n-1)/(ok-1);
        cout<<distance-1<<endl;
    }
    else
    {
        ll distance=(n-total_max)/(ok-1);
        cout<<distance-1<<endl;
    }
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




