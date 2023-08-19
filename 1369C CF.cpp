#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
ll a[1000005];
vector<ll>v;
int main()
{
    fast;
    ll x,t;
    cin>>t;
    while(t--)
    {
       ll n,k,res=0;
       cin>>n>>k;
       for(ll i=1;i<=n;i++)cin>>x,v.push_back(x);
       sort(v.begin(),v.end());
       for(ll i=0;i<k;i++)cin>>a[i];
       sort(a,a+k);
       for(ll i=0;i<k;i++)
       {
           if(a[i]==1)
           {
               res+=v.back()*2;
               v.pop_back();
           }
           else
           {
                ll x=--a[i];
                res+=v.back();
                res+=v.front();
                v.erase(v.begin(),v.begin()+x);
                v.pop_back();
           }
       }
       cout<<res<<endl;
       v.clear();
    }
    return 0;
}
