#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[100005];
ll b[100005];
int main()
{
    fast;
    ll t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        b[0]=a[0];ll j=0;
        for(ll i=1;i<n-1;i++)
            if(a[i]>=a[i+1]&&a[i]>=a[i-1]||a[i]<=a[i-1]&&a[i]<=a[i+1])b[++j]=a[i];
        b[++j]=a[n-1];
        cout<<j+1<<endl;
        for(ll i=0;i<=j;i++)cout<<b[i]<<" ";
        cout<<endl;

    }
    return 0;
}

