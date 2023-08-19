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
unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>st;
//ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n,m;
string str;
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
    cin>>n>>m;
    vector<ll>v;
    queue<ll>q;
    set<ll>s;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(!(s.count(x)))
        {
            if(q.size()==m)
            {
                ll i=q.front();
                q.pop();
                s.erase(i);
            }
            q.push(x);
            s.insert(x);
        }
    }
    while(q.size()>0)
    {
        v.push_back(q.front());
        q.pop();
    }
    cout<<v.size()<<endl;
    reverse(v.begin(),v.end());
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
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





