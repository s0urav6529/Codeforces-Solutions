#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
ll a[300];
int main()
{
    fast;
    ll n,m,sum=0,cnt=0;
    cin>>n>>m;
    string str;
    cin>>str;
    while(m--)
    {
        char ch;
        cin>>ch;
        ll i=ch;
        a[i]=1;
    }
    ll len=str.length();
    for(ll i=0;i<len;i++)
    {
        ll x=str[i];
        if(a[x]==1)cnt++;
        if(a[x]!=1||i+1==len)
        {
            sum+=((cnt*(cnt+1))/2);
            cnt=0;
        }
    }
    cout<<sum<<endl;
    return 0;
}

