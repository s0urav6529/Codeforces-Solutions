#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        while(n>1)
        {
            if(n%2==0)
            {
                ll div=1,i;
                for(i=2;i*i<=n;i++)if(n%i==0){if((n/i)&1)div=max(div,n/i);else if(i&1)div=max(div,i);}
                if(div>1)n/=div;
                else n--;cnt++;
            }
            else n/=n,cnt++;
        }
        if(cnt&1)cout<<"Ashishgup"<<endl;
        else cout<<"FastestFinger"<<endl;
    }
    return 0;
}
