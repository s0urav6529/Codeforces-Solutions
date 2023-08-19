#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back ;
#define mpr make_pair ;
#define mod 1000000007;
#define pi acos(-1.0);
#define mx INT_MIN
#define mn INT_MAX
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

void solve()
{
    ll x,y;
    cin>>x>>y;
    if(x==y)cout<<"YES"<<endl;
    else if(x>y)cout<<"YES"<<endl;
    else if(x==1&&y>1)cout<<"NO"<<endl;
    else
    {
        ll bef=x;
        while(1)
        {
            if(x%2==0)
            {
                x=(3*x)/2;
                if(x==y){cout<<"YES"<<el;return;}
                else if(x==bef){cout<<"NO"<<el;return;}
            }
            else
            {
                x--;
                if(x==y){cout<<"YES"<<el;return;}
                else if(x==bef){cout<<"NO"<<el;return;}
            }
            if(x>y){cout<<"YES"<<el;return;}
        }
    }
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}



