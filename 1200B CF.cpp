#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[105];
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,dif,beg,ok=false;
        cin>>n>>beg>>dif;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            if(i==n){ok=true;break;}
            if(a[i]==a[i+1])
            {
                ll rest=max(0ll,a[i]-dif);
                beg+=a[i]-rest;
                ok=true;
            }
            else if(a[i]<a[i+1])
            {
                ll rest=max(0ll,a[i+1]-dif);
                if(rest>a[i])
                {
                    ll need=rest-a[i];
                    if(need<=beg)beg-=need,ok=true;
                }
                else beg+=a[i]-rest,ok=true;
            }
            else
            {
                ll rest=max(0ll,a[i+1]-dif);
                beg+=a[i]-rest;
                ok=true;
            }
            if(!ok)break;
            else ok=false;
        }
        if(!ok)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
