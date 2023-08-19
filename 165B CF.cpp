#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
ll a[1000005];
void solve()
{
    ll n,k,ans=10000000000;
    cin>>n>>k;
    ll l=0,r=n;
    while(l<=r)
    {
        ll mid=(l+r)/2,sum=mid;
        for(int i=1;pow(k,i)<=mid;i++)sum+=(mid/pow(k,i));
        if(sum>=n)ans=min(ans,mid),r=mid-1;
        else l=mid+1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    solve();
    return 0;
}
