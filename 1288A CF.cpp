#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll=long long;
using dd=double;
void solve(ll n,dd d)
{
    ll l=0,r=n,c=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        double fun=ceill(d/(mid+1));
        if(fun+mid<=n)
        {
            c=1;
            break;
        }
        else r=mid-1;
    }
    if(c==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    ll t,n;
    dd d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;solve(n,d);
    }
    return 0;
}

