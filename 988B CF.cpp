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
#define lb lower_bound
#define ub upper_bound
using namespace std;
using ll=long long;
using ld=long double;
#define rep(h, g, f) for (ll i=h ; i<g ; i+=f)
//vector<ll>v1,v2;
vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>st;
//ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n;
string m;
///*********************Keep Coding****************************
bool compair(string a,string b)
{
    return a.size()<b.size();
}
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    cin>>n;
    rep(0,n,1)cin>>m,s.pb(m);
    sort(s.begin(),s.end(),compair);
    bool flag=1;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i+1].find(s[i])==string::npos) flag=0;
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        for(auto i:s) cout<<i<<endl;
    }
    else cout<<"NO"<<endl;
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




