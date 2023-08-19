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
    if(n==1)cout<<"-1"<<endl;
    else
    {
        cout<<"2";
        while(n>1)
        {
            cout<<"3";
            n--;
        }
        cout<<endl;
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
