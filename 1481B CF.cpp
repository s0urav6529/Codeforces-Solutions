#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    for(int z=1;z<=tc;z++)
    {
        int n,k;
        cin>>n>>k;
        ll a[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        int pos=1;
        a[n+1]=a[n];
        while(k--)
        {
            pos=1;
            for(int i=1;i<=n;)
            {
                if(a[i]>=a[i+1])i++,pos++;
                else
                {
                    a[i]+=1;
                    break;
                }
                if(pos>=n)
                {
                    pos=-1;
                    break;
                }
            }
            if(pos==-1) break;
        }
        cout<<pos<<endl;

    }
    return 0;
}





