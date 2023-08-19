#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
int a[103];
int b[103];
int main()
{
    fast;
    ll n,m;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);sort(b,b+m);
    if(a>b)
    {
        int cnt=0;
        for(int j=0;j<m;j++) for(int i=0;i<n;i++) if(abs(b[j]-a[i])<=1){cnt++,a[i]=100000;break;}
        cout<<cnt<<endl;
    }
    else
    {
        int cnt=0;
        for(int j=0;j<n;j++) for(int i=0;i<m;i++) if(abs(a[j]-b[i])<=1){cnt++,b[i]=100000;break;}
        cout<<cnt<<endl;
    }
    return 0;
}
