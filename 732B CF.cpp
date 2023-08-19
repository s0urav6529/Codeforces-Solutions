#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll a[100005];
int main()
{
    fast;
    ll n,k,sumx=0,sum=0,z=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sumx+=a[i];
        if(i>0)
        {
            a[i]+=max(z,k-a[i]-a[i-1]);
            sum+=a[i];
        }
        else sum+=a[i];
    }
    cout<<sum-sumx<<endl;
    for(ll i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;

}




