#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll a[10000005];
void solve()
{
    ll n,k,flag=0;
    cin>>n>>k;
    for(ll i=0;;i++)
    {
        ll sum=0;
        for(int j=0;j<=k;j++)
        {
            ll num=i+j,rem=0;
            while(num)
            {
                rem+=(n%10);
                num/=10;
            }
            sum+=rem;
            if(sum>n){flag=1;break;}
            if(sum==n){cout<<i<<endl;return;}
        }
        if(flag)break;
    }
    if(flag)cout<<"-1"<<endl;return;

}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
