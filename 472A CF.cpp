#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int n,x,y,z;
    cin>>n;
    if(n%2==0)
    {
        x=n/2;
        if(prime(x))
        {
            x=x+1;
            y=n-x;
        }
        else
            y=n-x;
        cout<<x<<" "<<y<<endl;
    }
    else if(n%3==0)
    {
        x=n/3;
        if(prime(x))
        {
            x=x+1;
            y=n-x;if(prime(y))
            {
                x=x-2;
                y=n-x;
            }
        }
        else
        {
            y=n-x;
        }

        cout<<x<<" "<<y<<endl;
    }
    else
    {
        x=9;
        y=n-x;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
int prime(int p)
{
    int ok=0;
    for(int i=2;i*i<=p;i++)
    {
        if(p%i==0)
        {
            ok=1;
            return 0;
        }
    }
    if(ok==0)
        return 1;
}

