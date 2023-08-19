#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[100005];
ll solve(ll M,ll n)
{
    ll l=1,r=n;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(a[m]>=M&&a[m-1]<M)return m;
        else if(a[m]>M)r=m-1;
        else l=m+1;
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,m,t,c,M;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>t>>c,a[i]=(t*c)+a[i-1];
    for(int i=0;i<m;i++)
    {
        cin>>M;
        cout<<solve(M,n)<<endl;
    }
    return 0;
}
