#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx INT_MIN;
#define mn INT_MAX;
#define ff first;
#define ss second;
#define inf 1e9
#define linf 1e18
#define eps 1e-9
#define el endl;
using namespace std;
typedef vector<int> vi;
typedef vector<long> vl;
typedef map<int,int>mi;
typedef map<long,long>ml;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<long,long>pll;
using ll=long long;
using ld=long double;
ll FRONT[1000005];
ll BACK[1000005];
int main()
{
    fast;
    ll ans=0;
    string str;
    cin>>str;
    ll len=str.length()-1;
    FRONT[0]=0;
    BACK[len]=0;
    for(ll i=1;i<=len;i++)
    {
        if(str[i]=='v'&&str[i]==str[i-1])
            FRONT[i]=FRONT[i-1]+1;
        else FRONT[i]=FRONT[i-1];
    }
    for(ll i=len-1;i>=0;i--)
    {
        if(str[i]=='v'&&str[i]==str[i+1])
            BACK[i]=BACK[i+1]+1;
        else BACK[i]=BACK[i+1];
    }
    for(ll i=0;i<=len;i++)
    {
        if(str[i]=='o') ans+=(FRONT[i]*BACK[i]);
    }
    cout<<ans<<endl;
    return 0;
}

