#include<bits/stdc++.h>
#include<math.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
ll a[1000005];
ll n;
void solve()
{
    ld area=0;
    cin>>n;
    a[0]=0;
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    for(ll i=n;i>=1;i-=2)
        area+=(pi*(a[i]*a[i])-(pi*(a[i-1]*a[i-1])));
    if(!(n&1))area=-(area);
    cout<<fixed<<setprecision(10)<<area<<endl;
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
