#include<bits/stdc++.h>
#include<math.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
#define pi acos(-1.0)
ll a[1000005];
ll n;
void solve()
{
    ll rl,d,rs,t,x,y,r;
    cin>>rl>>d;
    rs=rl-d;
    cin>>t;
    ll cnt=0;
    while(t--)
    {
        cin>>x>>y>>r;
        ll d=pow(x,2)+pow(y,2);
        ll p1=pow(rs,2),p2=pow(rl,2);
        if(d>=p1&&d<=p2)
        {
            ll x1=x-r,x2=x+r,y1=y-r,y2=y+r;
            ll d1=pow(x1,2)+pow(y,2);
            if(d1>=p1&&d1<=p2)
            {
                ll d1=pow(x2,2)+pow(y,2);
                if(d1>=p1&&d1<=p2)
                {
                    ll d1=pow(x,2)+pow(y1,2);
                    if(d1>=p1&&d1<=p2)
                    {
                        ll d1=pow(x,2)+pow(y2,2);
                        if(d1>=p1&&d1<=p2) cnt++;
                    }
                }
            }

        }
    }
    cout<<cnt<<endl;
    return;
}
int main()
{
    fast;
    //ll t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}
