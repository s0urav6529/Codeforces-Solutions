#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll ara[100005];
int main()
{
    int n,k,mx=0;
    ll Max=0;
    cin>>n;
    for(int i=1;i<=n;i++){cin>>k;ara[k]+=k;mx=max(mx,k);}
    for(int i=2;i<=mx;i++){ara[i]=max(ara[i-1],ara[i]+ara[i-2]);Max=max(Max,ara[i]);}
    cout<<Max<<endl;
    return 0;
}
