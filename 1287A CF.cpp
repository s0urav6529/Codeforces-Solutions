#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int tc,grp,x=1,i=0,cnt=0;
    char str[101];
    cin>>tc;
    while(tc--)
    {
        cin>>grp;
        cin>>str;
        str[grp]='\0';
        while(x!=0)
        {
            if(str[i]=='A' && str[i+1]=='P')
            {
               str[i+1]='A';
               i=i+2;
               x=2;
            }
            else
                i++;
            if(str[i]=='\0')
            {
                i=0;
                if(x!=2)
                    x=0;
                if(x==2)
                {
                    x=1;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        cnt=0;
        x=1;

    }
    return 0;
}
