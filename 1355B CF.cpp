#include<iostream>
#include<algorithm>
using namespace std;
using ll=long long;
ll ara[1000002];
int main()
{
    ll t,n,grp=0,num=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(ll i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(ll i=0;i<n;i++)
        {
            if(++num==ara[i])
            {
                grp++;
                num=0;
            }
        }
        cout<<grp<<endl;
        grp=0;
        num=0;
    }
    return 0;
}
