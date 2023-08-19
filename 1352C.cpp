#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    int t;
    ll n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<k+((k-1)/(n-1))<<endl;
    }
    return 0;
}
