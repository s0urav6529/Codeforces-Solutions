#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    int a,b;
    cin>>n>>m>>a>>b;
    if(n%m==0)
        cout<<"0"<<endl;
    else
    {
        if(n<m)
        {
            ll zero=n*b;
            ll built=((m-n)*a);
            ll mn=min(zero,built);
            cout<<mn<<endl;
        }
        else
        {
            ll demo=((n-m)*b);
            ll demo2=((n%m)*b);
            demo=min(demo,demo2);
            ll built=((m-(n%m))*a);
            ll mn=min(demo,built);
            cout<<mn<<endl;
        }
    }
    return 0;
}


