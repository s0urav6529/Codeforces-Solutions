#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[1000005];
set<ll>s;
ll n;
void solve()
{
    cin>>n;
    if(n==0)cout<<n<<endl;
    else if(n&1)cout<<(n+1)/2<<endl;
    else cout<<n+1<<endl;
    return;
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}
