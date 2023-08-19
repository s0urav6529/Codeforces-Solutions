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
    if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
    else
    {
        for(ll i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                cout<<n/i<<" "<<n-(n/i)<<endl;
                return;
            }
        }
        cout<<"1"<<" "<<n-1<<endl;
    }
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
