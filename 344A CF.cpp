#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,g=0;
    string news,olds="";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>news;
        if((news==olds));
        else
            g++;
        olds=news;
    }
    cout<<g<<endl;
    return 0;
}

