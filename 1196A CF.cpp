#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int tc;
    long long a,b,c,sum=0;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c;
        sum+=a+b+c;
        cout<<sum/2<<endl;
        sum=0;
    }
    return 0;
}
