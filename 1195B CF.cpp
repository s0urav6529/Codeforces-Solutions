#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll x=(-3+sqrtl(9+8*(n+k)))/2;cout<<n-x<<endl;
    return 0;
}
