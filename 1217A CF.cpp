#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[100005];
ll solve(ll str,ll in,ll ex)
{
    ll l=0,r=100000000,ans=0;
    if(ex==0&&str>in)return 1;
    while(l<=r)
    {
        ll mid=(l+r)/2;ll add=ex-(mid-1);
        if((str+add)>(in+(ex-add)))ans=max(ans,mid),l=mid+1;
        else r=mid-1;
    }
    ans=min(ex+1,ans);
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t,str,in,ex;
    cin>>t;
    while(t--)
    {
        cin>>str>>in>>ex;
        cout<<solve(str,in,ex)<<endl;
    }
    return 0;
}

