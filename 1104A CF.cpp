#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,cnt;
    cin>>n;
    if(n%2==0)
    {
        if(n>8)
        {
            if(n%2==0)
            {
                cnt=n/2;
            }
            if(n%4==0)
            {
                if(cnt>n/4)
                    cnt=n/4;
            }
            if(n%6==0)
            {
                if(cnt>n/6)
                    cnt=n/6;
            }
            if(n%8==0)
            {
                if(cnt>n/8)
                    cnt=n/8;
            }
            int x=cnt;
            cout<<x<<endl;
            while(cnt--)
            {
                cout<<n/x<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"1"<<endl<<n<<endl;
    }
    else
    {
       if(n>9)
        {
            if(n%1==0)
            {
                cnt=n/1;
            }
            if(n%3==0)
            {
                if(cnt>n/3)
                    cnt=n/3;
            }
            if(n%5==0)
            {
                if(cnt>n/5)
                    cnt=n/5;
            }
            if(n%7==0)
            {
                if(cnt>n/7)
                    cnt=n/7;
            }
            if(n%9==0)
            {
                if(cnt>n/9)
                    cnt=n/9;
            }
            int x=cnt;
            cout<<x<<endl;
            while(cnt--)
            {
                cout<<n/x<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"1"<<endl<<n<<endl;
    }
    return 0;
}


