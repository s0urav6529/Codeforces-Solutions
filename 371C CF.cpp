#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
ll a[1000005];
void solve()
{
    ll b=0,s=0,c=0,nb,ns,nc,pb,ps,pc,R;
    string str;
    cin>>str;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>R;
    for(ll i=0;i<str.length();i++){if(str[i]=='B')b++;else if(str[i]=='C') c++;else s++;}
    ll l=0,r=1000000000000000,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2,x=0;
        ll B=max(((mid*b)-nb),x),S=max(((mid*s)-ns),x),C=max(((mid*c)-nc),x);
        if(((B*pb)+(C*pc)+(S*ps))<=R){ans=max(ans,mid);l=mid+1;}
        else r=mid-1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    solve();
    return 0;
}



