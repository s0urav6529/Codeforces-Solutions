#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,B,A;
        cin>>a>>b>>c;
        if(a>=c) A=-1,B=b;
        else if(a<c)
        {
                A=1;
                if(a*b<=c)B=-1;
                else B=b;
        }
        cout<<A<<" "<<B<<endl;
    }
    return 0;
}
