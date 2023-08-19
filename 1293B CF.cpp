#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;double ans=0;cin>>n;
    for(int i=n;i>=1;i--)ans+=(1.0/i);
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}



