#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using dd=double;
ll a[1000005];
vector<pair<ll,ll>>v2;
ll n,m,x,y;
ll solve(ll in,ll cnt,ll start)
{
    ll l=start,r=n,flag=0,s=start;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;

        if(a[mid]-x<=in&&in<=a[mid]+y)
        {
            for(ll j=l;j<=mid;j++)
            {
                if((a[j]-x)<=in&&in<=(a[j]+y)){v2.push_back(make_pair(j,cnt));return j+1;}
            }
        }
        else if(in>a[mid]+y)l=mid+1;
        else r=mid-1;
    }
    if(flag==0)return s;
}
int main()
{
    fast;
    ll cnt=0,in;
    cin>>n>>m>>x>>y;
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll start=1;
    for(ll i=0;i<m;i++)
    {
        cin>>in;
        cnt++;
        ll pos=solve(in,cnt,start);
        start=pos;
    }
    auto it=v2.begin();
    cout<<v2.size()<<endl;
    while(it!=v2.end())
    {
        cout<<it->first<<" "<<it->second<<endl;it++;
    }
    return 0;
}

