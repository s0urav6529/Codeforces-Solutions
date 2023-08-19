#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[105];
int main()
{
    ll n,m,add=0;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    ll M=m+a[n];
    for(ll i=1;i<=n;i++)
    {
        ll cut=a[n]-a[i];
        if(cut<=m)
        {
            a[i]+=cut;
            m-=cut;
        }
        else a[i]+=m,m=0;
    }
    if(m>=n)
    {
        if(m%n==0)add=m/n;
        else add=(m/n)+1;
    }
    else if(m>0&&m<n) add=1;
    cout<<max(add+a[1],a[n])<<" "<<M<<endl;
    return 0;
}
