#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[1000005];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,l;
    double MAX=0,dif;
    cin>>n>>l;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){dif=a[i+1]-a[i];MAX=max(MAX,dif);}
    if(a[n]!=l||a[1]!=0){double dif1=l-a[n],dif2=a[1]-0;dif=max(dif1,dif2);if(dif>=MAX)cout<<fixed<<setprecision(10)<<dif<<endl;else {MAX=MAX/2;if(MAX<dif)cout<<fixed<<setprecision(10)<<dif<<endl;else cout<<fixed<<setprecision(10)<<MAX<<endl;}}
    else {MAX=MAX/2;cout<<fixed<<setprecision(10)<<MAX<<endl;}
}
