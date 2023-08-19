#include<iostream>
#include<math.h>
using namespace std;
int bigmod(int,long long ,int);
int main()
{
    long long n,z,x;
    cin>>n;
    cout<<bigmod(5,n,100)<<endl;
    return 0;
}
int bigmod(int b,long long p,int mod)
{
    int rest=1;
    b=b%mod;
    while(p)
    {
        if(p&1)
            rest=rest*b*b%mod;
        b=b*b%mod;
        p=p/2;

    }
    return rest;
}
