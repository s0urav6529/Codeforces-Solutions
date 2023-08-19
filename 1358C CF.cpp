#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    freopen("in.txt","r",stdin);
    ll t,x1,x2,y1,y2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1!=x2&&y1!=y2){ll res=(((y2-y1-1)*(x2-x1))+2+(x2-x1-1));cout<<res<<endl;}
        else if(x1==x2||y1==y2)cout<<"1"<<endl;
    }
    return 0;
}
