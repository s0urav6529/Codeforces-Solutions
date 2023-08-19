#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
void solve()
{
    ll n,cnt=0,t=0,flag=0;
    cin>>n;
    if(n==1)cout<<"0"<<endl;
    else
    {
        while(n)
        {
            if(n%6==0){n=n/6;cnt++,t=0;}
            else
            {
                if(t>1){flag=1;break;}
                else
                {
                    n*=2;
                    t++;
                    cnt++;
                }
            }
            if(n==1)break;
        }
        if(flag==0)cout<<cnt<<endl;
        else cout<<"-1"<<endl;
    }
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}




