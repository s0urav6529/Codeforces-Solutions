#include<bits/stdc++.h>
#include<math.h>
using namespace std;
using ll=long long;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    double ans=(a*c)-(b*c);cout<<ceill(ans/b)<<endl;
    return 0;
}
