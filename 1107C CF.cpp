#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using dd=double;
ll a[1000005];
string str;
ll n,k;
ll solve()
{
    ll i=0,damage=0;
    while(i<n)
    {
        priority_queue<ll>pq;
        pq.push(a[i]);
        i++;
        while(str[i]==str[i-1])
        {
            pq.push(a[i]);
            i++;
        }
        ll j=0;
        while(!pq.empty()&&j<k)
        {
            damage+=pq.top();
            pq.pop();
            j++;
        }
    }
    cout<<damage<<endl;
}
int main()
{
    fast;
    cin>>n>>k;
    for(ll i=0;i<n;i++)cin>>a[i];
    cin>>str;
    solve();
    return 0;
}


