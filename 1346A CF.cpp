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
        ll n,k,n1,n2,n3,n4;
        cin>>n>>k;
        n1=(n)/(1+k+(k*k)+(k*k*k));
        n2=k*n1;
        n3=k*n2;
        n4=k*n3;
        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
    }
    return 0;
}
