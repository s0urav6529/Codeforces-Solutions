#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long x,y,a,b,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cin>>a>>b;
        if(a<b)
        {
            if(x>y)
            {
                if(a*2>b)
                {
                    sum+=(b*y);
                    x-=y;
                    y=0;
                    sum+=(x*a);
                }
                else
                    sum+=(x+y)*a;

            }
            else if(x<y)
            {
                if(a*2>b)
                {
                    sum+=(b*x);
                    y-=x;
                    x=0;
                    sum+=(y*a);
                }
                else
                    sum+=(x+y)*a;
            }
            else
            {
                if(a*2>b)
                {
                    sum+=(b*y);
                    x=0;
                    y=0;
                }
                else
                {
                    sum+=(a*(x+y));
                    x=0;
                    y=0;
                }
            }
        }
        else
        {
            if(x>y)
            {
                sum+=(y*b);
                x-=y;
                y=0;
                sum+=(x*a);
            }
            else if(x<y)
            {
                sum+=(x*b);
                y-=x;
                x=0;
                sum+=(y*a);
            }
            else
            {
                sum+=(x*b);
                x=0;
                y=0;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
