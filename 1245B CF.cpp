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
    ll r,p,s,w=0,R=0,S=0,P=0;
    cin>>n>>r>>p>>s;
    cin>>str;
    for(ll i=0;i<str.size();i++)
    {
        if(str[i]=='R')R++;
        else if(str[i]=='S')S++;
        else P++;
    }
    w+=min(R,p)+min(S,r)+min(P,s);
    if(2*w>=n)
    {
        cout<<"YES"<<endl;
        string ns;
        for(ll i=0;i<str.size();i++)
        {
            if(str[i]=='R'&&p>0)ns+="P",p--;
            else if(str[i]=='P'&&s>0)ns+="S",s--;
            else if(str[i]=='S'&&r>0)ns+="R",r--;
            else ns+='X';
        }
        for(ll i=0;i<str.size();i++)
        {
            if(ns[i]=='X')
            {
                if(r>0)ns[i]='R',r--;
                else if(s>0)ns[i]='S',s--;
                else ns[i]='P',p--;
            }
        }
        cout<<ns<<endl;
    }
    else cout<<"NO"<<endl;
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




