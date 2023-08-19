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
vector<ll>v1;
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
    cin>>n>>str;
    stack<ll>s1,s0;
    v1.clear();
    ll t_sequance=0,Size=0;
    for(ll i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            if(s1.empty())
            {
                s0.push(++t_sequance);
                Size++;
                v1.push_back(t_sequance);
            }
            else
            {
                ll took=s1.top();
                s1.pop();
                s0.push(took);
                v1.push_back(took);
            }
        }
        else
        {
            if(s0.empty())
            {
                s1.push(++t_sequance);
                Size++;
                v1.push_back(t_sequance);
            }
            else
            {
                ll took=s0.top();
                s0.pop();
                s1.push(took);
                v1.push_back(took);
            }
        }
    }
    cout<<Size<<endl;
    for(auto i:v1)cout<<i<<" ";
    cout<<endl;
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




