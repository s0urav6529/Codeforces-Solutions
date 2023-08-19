#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a=n/k;
        int mod=n%k;
        int div=(k/2);
        mod=min(mod,div);
        cout<<((a*k)+mod)<<endl;
    }
}
