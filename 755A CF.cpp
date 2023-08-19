#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int n,x,p=1,m;
    cin>>n;
    for(m=1;m<=1000;m++)
    {
        x=n*m+1;
        if(prime(x));
        else
        {
            p=0;
            break;
        }

    }
    if(p==0)
    {
        cout<<m<<endl;
    }
    return 0;
}
int prime(int x)
{

    int p=0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            {
                p=1;
                return 0;
            }
    }
    if(p==0)
        return 1;
}

