#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll=long long;
ll a[1000005];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=n;i++)cin>>a[i];
    if(k>=n)cout<<a[n]<<endl;
    else
    {
        ll mx=0;
        for(ll i=n-k+1,j=n-k;j>=1;i++,j--)mx=max(a[i]+a[j],mx);
        cout<<max(mx,a[n])<<endl;
    }
    return 0;
}
