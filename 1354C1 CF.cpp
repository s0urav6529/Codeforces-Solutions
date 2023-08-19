#include<bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
int main()
{
    int t,n;cin>>t;
    while(t--)
    {
        cin>>n;
        double ans=1/tan(PI/(2.0*n));
        cout<<fixed<<setprecision(9)<<ans<<endl;
    }
    return 0;
}
