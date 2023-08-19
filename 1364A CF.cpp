#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[100005];
int main()
{
    fast;
    ll t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;ll cnt=0,sum=0,i,j;
        for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
        if(sum%x!=0)cout<<n<<endl;
        else
        {
            for(i=0,j=n-1;i<=j;i++,j--)
            {
                cnt++;
                if((sum-a[i])%x!=0){cout<<n-cnt<<endl;break;}
                else if((sum-a[j])%x!=0){cout<<n-cnt<<endl;break;}
                else if((sum-(a[i]+a[j]))%x!=0){cout<<n-(cnt+1)<<endl;break;}
                else sum-=a[i];
            }
            if(i>j)cout<<"-1"<<endl;
        }
    }
    return 0;
}
