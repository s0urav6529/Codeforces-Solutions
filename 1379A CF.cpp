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
//ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n,m;
const string fix="abacaba";
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
bool OneOrMore(string s)
{
    ll cnt=0;
    for(ll i=0;i<=s.size()-7;i++)
    {
        if(s.substr(i,7)==fix)cnt++;
    }
    return cnt==1;
}
void Print(string s)
{
   cout<<"yes"<<endl;
   for(ll i=0;i<s.size();i++)
   {
       if(s[i]=='?')cout<<'x';
       else cout<<s[i];
   }
   cout<<endl;
}
void solve()
{
    string str,dummy;
    cin>>n>>str;
    if(OneOrMore(str))
    {
        Print(str);
        return;
    }
    for(ll i=0;i<=n-7;i++)
    {
        dummy=str;
        bool flag=true;
        for(ll j=0;j<7;j++)
        {
            if(dummy[i+j]!='?'&&dummy[i+j]!=fix[j])
            {
                flag=false;
                break;
            }
            dummy[i+j]=fix[j];
        }
        if(flag&&OneOrMore(dummy))
        {
            Print(dummy);
            return;
        }
    }
    cout<<"no"<<endl;
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



