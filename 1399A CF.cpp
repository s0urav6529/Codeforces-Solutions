#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
ll a[55];
void solve()
{
    ll n,flag=0,x,bef;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++)
        if(i>0&&abs(a[i]-a[i-1])>1) flag=1;
    if(flag==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return;
    ///***************MAKE ALL THE INT LL*************
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
