#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
//ll pos[1000005],neg[1000005];
ll n;
//vector<ll>a,b;
void solve()
{
    ll j=0,k=0,pos_sum=0,neg_sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll in;
        cin>>in;
        if(in<0) neg_sum+=in/2;
        else pos_sum+=in/2;
        a[i]=in;
    }
    neg_sum=abs(neg_sum);
    ll mx=max(neg_sum,pos_sum);

    if(mx==pos_sum)
    {
        ll rest=pos_sum-neg_sum,ans;

        for(ll i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                if(a[i]&1)
                {
                    if(rest>0) ans=(a[i]/2)+(-1) , rest--;
                    else ans=(a[i]/2);
                }
                else ans=(a[i]/2);
            }
            else ans=(a[i]/2);
            cout<<ans<<endl;
        }
    }
    else
    {
        ll rest=neg_sum-pos_sum,ans;

        for(ll i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                if(a[i]&1)
                {
                    if(rest>0) ans=(a[i]/2)+1 ,rest--;
                    else ans=(a[i]/2);
                }
                else ans=(a[i]/2);
            }
            else ans=(a[i]/2);
            cout<<ans<<endl;
        }
    }
    return;
    ///********************MAKE ALL THE INT LL************************
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}


