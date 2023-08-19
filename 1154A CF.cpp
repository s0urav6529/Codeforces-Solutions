#include<iostream>
using namespace std;
long long ara[100];
int main()
{
    int max=0,h;
    for(int i=1;i<=4;i++)
    {
        cin>>ara[i];
        if(ara[i]>max)
        {
            max=ara[i];
            h=i;
        }
    }
    for(int i=1;i<=4;i++)
    {
        if(h!=i)
            cout<<max-ara[i]<<" ";
    }

    return 0;
}


