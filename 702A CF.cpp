#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    ll t,x,bf=0,cnt=0,ans=0;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>x;
        if(bf<x)cnt++,bf=x;
        else
        {
            ans=max(ans,cnt);
            cnt=1;bf=x;
        }
    }
    cout<<max(ans,cnt)<<endl;

}



