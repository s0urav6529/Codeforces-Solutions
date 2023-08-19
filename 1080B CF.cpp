#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll fun(ll x)
{
    if(!(x&1))return x/2;
    else return fun(x-1)-x;
}
void solve()
{
    ll l,r,ans;
    cin>>l>>r;
    cout<<fun(r)-fun(l-1)<<endl;
    return;
}
int main()
{
    fast;
    ll q;
    cin>>q;
    while(q--)solve();
    return 0;
}
