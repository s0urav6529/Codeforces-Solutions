#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[1000005];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        ll MAX=0,flag=0,sum=0,i;
        cin>>n>>m;
        for(i=1;i<=n;i++)cin>>a[i];
        for(i=1;i<=n;i++)
        {
            sum+=a[i],MAX=max(MAX,a[i]);
            if(sum>m){flag=1;break;}
        }
        if(flag==1){sum-=MAX;if(sum+a[i]<=m||sum+a[++i]<=m){cout<<find(a+1,a+i+1,MAX)-a<<endl;}else cout<<"0"<<endl;}
        else cout<<"0"<<endl;
    }
    return 0;
}

