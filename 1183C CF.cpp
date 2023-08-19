#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
void solve()
{
    ll k,n,a,b,ans=-1;
    cin>>k>>n>>a>>b;
    ll l=0,r=n;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(((mid*a)+((n-mid)*b))<k)ans=max(mid,ans),l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t,n,x;
    cin>>t;
    while(t--)solve();
    return 0;
}



