#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
vector<ll>l;
ll a[1000005];
ll b[1000005];
bool frequncy[1000005];
void solve()
{
    ll n,x,cnt=0;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>x,a[i]=x,frequncy[x]=1;
    for(ll i=1;i<=n;i++)cin>>b[i];
    ll j=1;
    for(ll i=1;i<=n;i++)
    {
        if(frequncy[a[i]]==1)
        {
            for(;j<=n;j++)
            {
                if(a[i]!=b[j])cnt++,frequncy[b[j]]=0;
                else {j++;break;}
            }
        }
    }
    cout<<cnt<<endl;
    return;
}
int main()
{
    fast;
    solve();
    return 0;
}
