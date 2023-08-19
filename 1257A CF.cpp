#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    freopen("in.txt","r",stdin);
    int tc,n,x,a,b,dif1,dif2,p_dif;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>x>>a>>b;
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        p_dif=b-a;
        dif1=a-1;
        dif2=n-b;
        if(dif1<dif2)
        {
            if(dif2<x)
            {
                 b+=dif2;
                 x=x-dif2;
            }
            else
            {
                b+=x;
                x=0;
            }
            if(dif1<x)
                a-=dif1;
            else if(x>0)
                a-=x;

        }
        else
        {
            if(dif1<x)
            {
                a-=dif1;
                x=x-dif1;
            }
            else
            {
                a-=x;
                x=0;
            }
            if(dif2<x)
                b+=dif2;
            else if(x>0)
                  b+=x;
        }
        cout<<b-a<<endl;

    }
    return 0;
}

