#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
void solve()
{
    stack<ll>s;
    ll n,x;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        if(s.empty())s.push(x);
        else
        {
            ll val;
            while(!s.empty()&&s.top()<x)
            {
                val=s.top();
                s.pop();
            }
            s.push(min(val,x));
        }
    }
    if(s.size()==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}


