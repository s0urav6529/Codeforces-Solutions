#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[10000005];
ll n;
ll solve(ll val)
{
    ll l=1,r=n,ans=0;
    while(l<=r)
    {
        ll mid=l+((r-l)/2);
        if(a[mid]<=val)
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
int main()
{
    fast;
    ll q,x;
    cin>>n>>q;
    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        if(i==1)a[i]=x;
        else a[i]=a[i-1]+x;
    }
    ll damage=0,k,out;
    for(ll i=0;i<q;i++)
    {
        cin>>k;
        ll pos=solve(k+damage);
        if(n-pos==0)damage=0,out=n;
        else damage+=k,out=n-pos;
        cout<<out<<endl;
    }
    return 0;
}



