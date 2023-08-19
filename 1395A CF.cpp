#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define read freopen ("in.txt","r",stdin);
//#define out freopen ("out.txt","w",stdout);
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
ll n,m;
//string s,s1,s2;
///*************************Keep Coding***********************************
void solve()
{
    int a[5],odd=0,zero=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[i]&1)odd++;
        if(!a[i]&&i<3) zero++;
    }
    if(odd<=1) cout<<"YES"<<endl;
    else if(!zero)
    {
        odd=0;
        a[3]+=3;
        a[0]--,a[1]--,a[2]--;
        for(int i=0;i<4;i++) if(a[i]&1)odd++;
        if(odd<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    return;
    ///********************MAKE ALL THE INT LL****************************
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
