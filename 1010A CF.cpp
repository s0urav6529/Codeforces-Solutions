#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
int main()
{
    fast;
    dd n,m,x,one=0;
    cin>>n>>m;
    dd s=m;
    for(ll i=0;i<n*2;i++)
    {
        cin>>x;
        if(x==1)one++;
        else s*=(x/(x-1));
    }
    if(one>0)cout<<"-1"<<endl;
    else cout<<fixed<<setprecision(10)<<(s-m)<<endl;
    return 0;
}
