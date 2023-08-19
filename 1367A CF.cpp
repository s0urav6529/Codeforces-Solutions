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
        string str,s;
        cin>>str;
        ll len=str.length();
        s+=str[0];
        for(ll i=1;i<len-2;i+=2)s+=str[i];
        s+=str[len-1];
        cout<<s<<endl;

    }
}
