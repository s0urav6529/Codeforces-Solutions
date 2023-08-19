#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,x,even=0,odd=0;
       cin>>n;
       for(ll i=0;i<n;i++)
       {
           cin>>x;
           if(!(i&1))
           {
               if(x%2==0)continue;
               else odd++;
           }
           else
           {
               if(x%2!=0)continue;
               else even++;
           }
       }
       if(odd==even)cout<<odd<<endl;
       else cout<<"-1"<<endl;
    }
}

