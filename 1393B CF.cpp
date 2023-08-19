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
ll freq[100005];
ll group[1000005];
ll n,m;
//string str;
///*********************Keep Coding****************************
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
    ll x;
    cin>>n;
    memset(freq,0,sizeof(freq));
    memset(group,0,sizeof(group));
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        freq[x]++;
        group[freq[x]]++;
    }
    cin>>m;
    while(m--)
    {
        char c;
        cin>>c>>x;
        if(c=='+')
        {
            freq[x]++;
            group[freq[x]]++;
        }
        else
        {
            group[freq[x]]--;
            freq[x]--;
        }
        if(group[8]>0||(group[6]>0&&group[2]>1)||group[4]>1||(group[4]>0&&group[2]>2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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




