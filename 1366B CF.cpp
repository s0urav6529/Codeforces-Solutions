#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using dd=double;
int main()
{
    fast;
    ll t,n,x,m,c,d,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        ll y=x;
        for(int i=0;i<m;i++)
        {
            cin>>c>>d;
            if(x>=c&&x<=d||y>=c&&y<=d) x=min(x,c),y=max(y,d);
        }
        cout<<(y-x)+1<<endl;
    }
    return 0;
}
