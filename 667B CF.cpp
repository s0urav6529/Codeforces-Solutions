#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
ll a[1000005];
ll n;
void solve()
{
    ll sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n,greater<ll>());
    sum-=a[0];
    cout<<a[0]-sum+1<<endl;

    //MAKE ALL THE INT LL//
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

