#include<iostream>
using namespace std;
int ara[100003];
int arab[100003];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int maxi=1;
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
            arab[i]=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=2;(i*j)<=n;j++)
            {
                if(ara[i*j]>ara[i])
                    arab[i*j]=max(arab[i*j],arab[i]+1);
            }
            maxi=max(arab[i],maxi);
        }
        cout<<maxi<<endl;

    }
    return 0;
}
