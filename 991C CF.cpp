#include<iostream>
using namespace std;
using ll=long long;
ll solve(ll n)
{
    ll l=0,r=n,ans=1000000000000000000;
    if(n<10)return 1;
    while(l<=r)
    {
        ll mid=(l+r)/2,sum=0,p=n;
        while(p)
        {
            sum+=mid;p-=mid;
            if(p>9)p-=(p/10);
            if(p<=9) break;
        }
        if((sum+p)*2>=n)ans=min(mid,ans),r=mid-1;
        else l=mid+1;
    }
    return ans;
}
int main()
{
    ll n,t;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}
