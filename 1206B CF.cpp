#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v1,v2;
unordered_map<ll,ll>ump;
map<ll,ll>mp;
set<ll>st;
ll a[1000005];
ll pos[1000005],neg[1000005];
ll n,m;
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
    ll neg=0,zero=0,cost=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)neg++;
        else if(a[i]==0)zero++;
    }
    if((neg&1))
    {
        bool ok1=false,ok2=false;
        for(ll i=0;i<n;i++)
        {
            if((a[i]<0)&&ok1==false)
            {
                cost+=abs(a[i])-1;
                ok1=true;
            }
            else if(a[i]==0&&ok2==false)
            {
                cost+=1;
                ok2=true;
            }
            else
            {
                if(a[i]) cost+=abs(a[i])-1;
                else cost++;
            }
        }
        if(ok2==false) cost+=2;
        cout<<cost<<endl;
    }
    else
    {
        for(ll i=0;i<n;i++)
        {
            if(a[i]) cost+=abs(a[i])-1;
            else cost++;
        }
        cout<<cost<<endl;
    }
    return;
    ///********************MAKE ALL THE INT LL************************
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}




