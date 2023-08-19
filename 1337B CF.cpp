#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solve()
{
    ll h,n,m;
    cin>>h>>n>>m;
    while(n+m>0)
    {
        if(h<=(m*10))
        {
            while(m)
            {
                h-=10;
                if(h<=0)
                {
                    cout<<"YES"<<endl;return;
                }
                m--;
            }
        }
        else if(n)
        {
            h=(h/2)+10;
            n--;
        }
        if(h<=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        else if(n==0&&h>(m*10))m=0;
    }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
