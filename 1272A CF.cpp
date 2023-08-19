#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
ll ara[5];
ll SORT(int a,int b,int c)
{
    ara[0]=a,ara[1]=b,ara[2]=c;
    sort(ara,ara+3);
    return ara[1];
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll mn=min({a,b,c});
        ll mx=max({a,b,c});
        ll mid=SORT(a,b,c);
        if(mn==mx&&mid==mx)cout<<"0"<<endl;
        else if(mn!=mid&&mx!=mid)
        {
            mn++,mx--;
            ll ans=abs(mn-mid)+abs(mn-mx)+abs(mx-mid);
            cout<<ans<<endl;
        }
        else if(mx==mid&&mid!=mn)
        {
            mx--,mid--;
            if(mn==mx&&mid==mx)cout<<"0"<<endl;
            else
            {
                mn++;
                ll ans=abs(mn-mid)+abs(mn-mx)+abs(mx-mid);
                cout<<ans<<endl;
            }
        }
        else if(mn==mid&&mid!=mx)
        {
            mn++,mid++;
            if(mn==mx&&mid==mx)cout<<"0"<<endl;
            else
            {
                mx--;
                ll ans=abs(mn-mid)+abs(mn-mx)+abs(mx-mid);
                cout<<ans<<endl;
            }
        }

    }
}
