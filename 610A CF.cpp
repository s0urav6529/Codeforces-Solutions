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
ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n;
//vector<ll>a,b;

void solve()
{
    cin>>n;
    if(n&1)cout<<0<<endl;
    else
    {
        ll ans=(n/2)-2;
        if(ans&1)
            cout<<(ans+1)/2<<endl;
        else cout<<ans/2<<endl;

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



