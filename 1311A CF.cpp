#include<iostream>
using namespace std;
int main()
{
    int t;
    long long a,b,dif=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            dif=a-b;
            if(dif%2==0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else if(b>a)
        {
             dif=b-a;
             if(dif%2==0)
               cout<<"2"<<endl;
             else
                 cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;
        dif=0;

    }
    return 0;
}

