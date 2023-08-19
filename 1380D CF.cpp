#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
using namespace std;
using ll=long long;
using ld=long double;
//ll a[1000005];
ll n;
vector<ll>a,b;
void solve()
{
    ll a1,a2,x,y,k,ans=0;
    cin>>a1>>a2;
    cin>>x>>k>>y;
    a.pb(0ll);
    for(ll i=0;i<a1;i++)
    {
        ll in;
        cin>>in;
        a.pb(in);
    }
    a.pb(0ll);
    b.pb(0ll);
    for(ll i=0;i<a2;i++)
    {
        ll in;
        cin>>in;
        b.pb(in);
    }
    b.pb(0ll);

    vector<ll>cal;
    for(ll i=1,j=1;i<a.size();i++)
    {
        if(a[i]!=b[j])  cal.pb(a[i]);
        else
        {
            ll Cals=cal.size();
            if(!Cals)
            {
                j++;
                continue;
            }

            sort(cal.begin(),cal.end());
            ll Bmax=max(b[j-1],b[j]) , Calmax=cal[Cals-1];

            if(Calmax>Bmax&&Cals<k)
            {
                cout<<"-1"<<endl;
                return;
            }

            if(k*y<x)
            {
                if(Calmax<Bmax)ans+=Cals*y;

                else ans+=((Cals-k)*y)+x;
            }

            else
            {
                ll Y=Cals%k;
                ans+=((Cals/k)*x)+(Y*y);
            }

            j++;
            cal.clear();
        }
        if(i+1==a.size()&&j!=b.size())
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<ans<<endl;
    return;
    ///********************MAKE ALL THE INT LL************************
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

