#include<iostream>
#include<stdio.h>
using namespace std;
int ara[2010];
int main()
{
    freopen("in.txt","r",stdin);
    int tc,n,odd=0,even=0,sum=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum%2!=0)
            cout<<"YES"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(ara[i]%2==0)
                    even++;
                else
                    odd++;
            }
            if(even>=1&&odd>=1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        sum=0;even=0;odd=0;
    }
    return 0;
}
