#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t,a,b,c,d,rest;
    ll total;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        total=b;
        rest=a-b;
        if(rest>0&&c<=d)
            cout<<"-1"<<endl;
        else if(total>=a)
            cout<<total<<endl;
        else
        {
            int st=c-d;
            if(rest%st==0)
            {
                ll mod=rest/st;
                cout<<total+(mod*c)<<endl;
            }
            else
            {
                ll mod=floor(rest/st)+1;
                cout<<total+(mod*c)<<endl;
            }
        }

    }
    return 0;
}
