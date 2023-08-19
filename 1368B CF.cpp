#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    ll k;
    cin>>k;
    string s="codeforces";
    ll a[11];
    for(ll i=0;i<10;i++)a[i]=1;
    ll ans=1;
    while(ans<k)
    {
        for(ll i=0;i<10;i++)
        {
            a[i]++;
            ans/=(a[i]-1);
            ans*=a[i];
            if(ans>=k)break;
        }
    }
    for(ll i=0;i<10;i++) while(a[i]--)cout<<s[i];
    cout<<endl;
    return 0;
}

