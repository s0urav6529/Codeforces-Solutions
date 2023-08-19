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
//vector<string>s;
//unordered_map<ll,ll>ump;
//map<ll,ll>mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
ll n;
string s;
///*************************Keep Coding***********************************
/*bool compair(pair<ll,ll>a,pair<ll,ll>b)///sort the first value decending and second value ascending
{
    if(a.ff==b.ff)return a.ss<b.ss;
    return a.ff>b.ff;
}*/
/*bool compair(string a,string b)///sort string by size
{
    return a.size()<b.size();
}*/
/*bool sign(ll num)///positive or negative
{
    return num>0;
}*/
void solve()
{
    ll allodd=0;
    cin>>s;
    n=s.size();
    for(ll i=0;i<n;i++)
    {
        int x=s[i]-'0';
        if(x&1) allodd++;
    }
    if(allodd==n) cout<<-1<<endl;
    else
    {
        int flag=0;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]<s[n-1]&&(s[i]-'0')%2==0)
            {
                swap(s[i],s[n-1]);
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            for(ll i=n-2;i>=0;i--)
            {
                if(s[i]>s[n-1]&&(s[i]-'0')%2==0)
                {
                    swap(s[i],s[n-1]);
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}

