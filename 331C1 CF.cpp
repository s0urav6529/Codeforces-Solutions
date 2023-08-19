#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
int main()
{
    fast;
    ll n,cnt=0;
    cin>>n;
    while(n)
    {
        ll x=n,mx=0;
        while(x)
        {
            mx=max(mx,x%10);
            x=x/10;
        }
        n-=mx;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}



