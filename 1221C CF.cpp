#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t,c,m,x;
    cin>>t;
    while(t--)
    {
        cin>>c>>m>>x;
        ll mn=min(c,m);ll mx=max(c,m);
        if(mn>x) {mx-=x;mn-=x;mn=min(mn,mx);if(((mn+mx)/3)<=mn)mn=((mn+mx)/3);cout<<x+mn<<endl;}
        else cout<<mn<<endl;

    }
    return 0;

}

