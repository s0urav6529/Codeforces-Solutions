#include<bits/stdc++.h>
using ll=long long;
using namespace std;
ll ara[100005];
ll solver(ll val,ll k)
{
    ll l=0,r=k-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ara[mid]==val)val++,l=0,r=k-1;
        else if(val>ara[mid])l=mid+1;else r=mid-1;
    }
    return val;
}
ll solvel(ll val,ll k)
{
    ll l=0,r=k-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ara[mid]==val)val--,r=k-1,l=0;
        else if(ara[mid]<val)l=mid+1;else r=mid-1;
    }
    return val;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t,n,s,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>k;
        ll mn=n+1,p=s;
        for(int i=0;i<k;i++)cin>>ara[i];
        sort(ara,ara+k);
        ll x=solver(s,k);if(x<=n)x=x-p,mn=min(mn,x);
        s=p;
        x=solvel(s-1,k);if(x>0)x=p-x,mn=min(mn,x);
        cout<<mn<<endl;
    }
    return 0;
}
