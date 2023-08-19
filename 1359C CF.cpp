#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll solve(ll h,ll c,ll tp)
{
    ll l=1,r=tp;
    ld pdif=INT_MAX,ans=INT_MAX;
    while(l<=r)
    {
        ld mid=(l+r)/2;ld ht=ceil(mid/2),ct=floor(mid/2);
        ld dif=((ht*h)+(ct*c))/mid;dif=abs(dif-tp);
        if(dif<=pdif) ans=min(ans,mid),pdif=dif,r=mid-1;
        else r=mid-1;
    }
    return ans;
}
int main()
{
    fast;
    ll t,h,c,tp;
    cin>>t;
    while(t--)
    {
        cin>>h>>c>>tp;
        cout<<solve(h,c,tp)<<endl;
    }
    return 0;
}

