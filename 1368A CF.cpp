#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
vector<ll>v;
ll a[100005];
set<ll>s;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll cnt=0,a,b,n,c;
        cin>>a>>b>>n;
        if(a<b)swap(a,b);
        while(a<=n)
        {
            c=a+b;
            b=a;
            a=c;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
