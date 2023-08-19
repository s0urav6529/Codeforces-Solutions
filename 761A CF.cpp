#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
ll n;
//vector<ll>a,b;
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a==b&&a>0&&b>0)cout<<"YES"<<endl;
    else if(abs(a-b)==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
    ///********************MAKE ALL THE INT LL************************
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



