#include<iostream>
#include<cstring>
using namespace std;
long long int gcd(long long,long long);
int main()
{
    long long int n,i,lcm,b,z,j,x,y;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        b=n/i;
        j=i;
        if(j>b)
        {
            j=j+b;
            b=j-b;
            j=j-b;
        }
        z=gcd(b,j);
        lcm=(j/z)*b;
        if(lcm==n)
        {
            x=j;
            y=b;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
long long int gcd(long long a,long long c)
{
    if(c==0)
        return a;
    else
        return gcd(c,a%c);
}
