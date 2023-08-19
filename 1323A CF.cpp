#include<iostream>
using namespace std;
int ara[102];
int main()
{
    int t,n,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ara[i];
        if(n>1)
        {
            for(int i=0;i<2;i++)
            {
                if(ara[i]%2==0)
                {
                    cout<<"1"<<endl;
                    cout<<i+1<<endl;
                    cnt=1;
                    break;
                }
                else if(ara[i]%2==0)
                {
                    cout<<"1"<<endl;
                    cout<<i+1<<endl;
                    cnt=1;
                    break;
                }
            }
            if(cnt==0)
            {
                cout<<"2"<<endl<<"1"<<" "<<"2"<<endl;
            }
        }
        else
        {
            if(ara[0]%2==0)
                cout<<"1"<<endl<<"1"<<endl;
            else
                cout<<"-1"<<endl;
        }
        cnt=0;
    }
    return 0;
}
