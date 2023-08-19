#include<iostream>
#include<stdio.h>
using namespace std;
long long isprime(long long);
int main()
{

    int tc;
    long long a,b,z;
    cin>>tc;
    while(tc--){
    cin>>a>>b;
    z=a+b;
    if((a-b==1)&&(isprime(z)))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
long long isprime(long long n)
{
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
