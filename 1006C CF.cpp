#include<bits/stdc++.h>
using ll=long long;
using namespace std;
ll a[1000005];
ll solve(ll n)
{
    ll l=0,r=n-1,lsum=a[l],rsum=a[r],mx=0;
    while(l<r)
    {
        if(lsum==rsum){mx=max(mx,rsum);l++;lsum+=a[l];r--;rsum+=a[r];}
        else if(lsum<rsum){l++;lsum+=a[l];}
        else {r--;rsum+=a[r];}
    }
    return mx;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)cin>>a[i];
    cout<<solve(n)<<endl;
    return 0;
}
