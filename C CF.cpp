#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[10],c;
    int count=0;
    int temp,x;
    cin>>ch;
    x=strlen(ch);
    temp=ch[1];
    for(int i=0;i<x;i++)
    {
        if(ch[i]>=temp)
        {
            temp=ch[i];
        }
    }
    c=temp;
    for(int i=0;i<x;i++)
    {
        if(c==ch[i])
            count++;
    }
    for(int i=1;i<=count;i++)
        cout<<c;
}
