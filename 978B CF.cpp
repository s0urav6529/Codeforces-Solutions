#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,i=0,cnt=0;
    cin>>n;
    char str[n],ch='\0';
    cin>>str;
    str[n+1]='\0';
    while(str[i]!='\0')
    {
        if(i==0)
        {
            if(str[i]!='x')
                cout<<"0"<<endl;
        }
        if(i>0)
        {
            if(str[i]=='x')
            {
                if(ch=='x')
                {
                    cnt++;
                }
                else
                    break;
            }
            cout<<n-2<<endl;
        }
        i++;
    }
    return 0;
}

