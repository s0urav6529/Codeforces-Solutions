#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[1000005];
ll solve(ll M,ll n)
{
    ll l=1,r=n,ans=0;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(a[m]<=M)ans=max(ans,m),l=m+1;
        else if(a[m]>M)r=m-1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,m,M;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];sort(a+1,a+n+1);
    for(int i=0;i<m;i++)
    {
        cin>>M;
        cout<<solve(M,n)<<" ";
    }
    cout<<endl;
    return 0;
}
