#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    ll t,n,k;cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k*k<=n&&(k&1)==(n&1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
