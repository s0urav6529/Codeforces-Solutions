#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
void solve()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=2;i<=n-1;i++)
    {
        if(a[i-1]<a[i]&&a[i]>a[i+1])
        {
            cout<<"YES"<<endl;
            cout<<i-1<<" "<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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


