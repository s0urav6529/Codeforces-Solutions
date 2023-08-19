#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
void solve()
{
    ll n,x,cnt=0;
    cin>>n>>x;
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    ll man=1;
    for(ll i=1;i<=n;i++)
    {
        if((man*a[i])>=x)
        {
            cnt++;
            man=1;
            continue;
        }
        man++;
    }
    cout<<cnt<<endl;
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}



