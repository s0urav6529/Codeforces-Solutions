#include<iostream>
using namespace std;
using ll=long long;
int max(ll n)
{
    int mx=0;
    while(n!=0)
    {
         int mod=n%10;
         if(mod>mx)
            mx=mod;
         n/=10;
    }
    return mx;
}
int min(ll n)
{
    int mn=9;
    while(n!=0)
    {
         int mod=n%10;
         if(mod<mn)
            mn=mod;
         n/=10;
    }
    return mn;
 }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll a1,k;
    cin>>t;
    while(t--)
    {
        cin>>a1>>k;
        if(k==1)
            cout<<a1<<endl;
        else
        {
            while(k>1)
            {
                int x=min(a1);
                if(x==0)
                    break;
                a1+=(max(a1)*x);
                k--;
            }
            cout<<a1<<endl;
        }
    }
    return 0;
}
