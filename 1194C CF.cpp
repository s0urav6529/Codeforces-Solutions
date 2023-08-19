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
map<char,int>Mp;
//set<ll>sl;
//set<pair<ll,ll>>sp;
//ll a[1000005];
//ll b[1000005];
//ll dp[10005][10005];
//ll pos[1000005],neg[1000005];
//ll n,m;
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
    Mp.clear();
    string s,t,p;
    cin>>s>>t>>p;
    for(int i=0;i<p.size();i++) Mp[p[i]]++;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]!=s[i]&&i<s.size())
        {
            if(Mp[t[i]]>0)
            {
                string n,z,q;
                for(int x=0;x<i;x++) q+=s[x];
                for(int j=i;j<s.size();j++) n+=s[j];
                z+=t[i];Mp[t[i]]--;
                s.clear();
                s+=q+z+n;
            }
            else break;
        }
        else if(i>=s.size())
        {
            if(Mp[t[i]]>0) s+=t[i],Mp[t[i]]--;
            else break;
        }
    }
    if(s==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    //read;//out;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}

