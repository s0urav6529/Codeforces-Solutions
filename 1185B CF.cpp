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
string send,rec;
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
    cin>>send>>rec;
    char bef='&';
    ll j=0,flag=0;
    for(ll i=0;i<send.size();i++)
    {
        if(send[i]==rec[j]) bef=rec[j],j++;
        else if(bef==rec[j])
        {
            while(send[i]!=rec[j]&&j<rec.size())
            {
                if(bef==rec[j]);
                else {  flag=1;  break; }
                j++;
            }
            if(send[i]==rec[j]) bef=rec[j],j++;
            else if(j>=rec.size()) {  flag=1;  break; }
        }
        else if(bef!=rec[j]) {  flag=1 ;  break; }
    }
    for(;j<rec.size();j++)if(rec[j]!=bef) {  flag=1 ; break; }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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




