#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int a[1000002];

void solve()
{
    ll n;
    cin>>n;
    ll i=1,x=1,z=10;
    for(ll j=1;j<=n;j++)
    {
        cout<<i<<" ";
        i+=2;
        if(j*x==z*x)
        {
            x++;
            z+=10;
            i=1;
        }
    }
    cout<<endl;
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



