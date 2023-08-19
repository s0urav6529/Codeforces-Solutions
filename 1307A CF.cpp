#include<iostream>
using namespace std;
int ara[100003];
int main()
{
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        for(int i=0;i<n;i++)
            cin>>ara[i];
        while(d--)
        {
            for(int i=1;i<n;i++)
            {
                if(ara[i]>0)
                {
                    ara[i]--;
                    ara[i-1]++;
                    break;
                }
            }
        }
        cout<<ara[0]<<endl;
    }

    return 0;
}
