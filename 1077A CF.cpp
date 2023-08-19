#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int tc;
    long long a,b,k,m,n;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            m=k/2;
            cout<<(a*m)-(b*m)<<endl;
        }
        else
        {
            m=k/2+1;
            n=k/2;
            cout<<(a*m)-(b*n)<<endl;
        }
    }
    return 0;
}

