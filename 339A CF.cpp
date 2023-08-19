#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int len,j=0,i;
    char old_ch[101],new_ch[101];
    cin>>old_ch;
    len=strlen(old_ch);
    for(i=0;i<len;i++)
    {
        if(old_ch[i]!='+')
        {
            new_ch[j++]=old_ch[i];
        }
    }
    new_ch[j]='\0';
    len=strlen(new_ch);
    sort(new_ch,new_ch+len);
    if(len!=1)
    {
        for(i=0;i<len-1;i++)
        {
            cout<<new_ch[i]<<"+";
        }
        cout<<new_ch[i]<<endl;
    }
    else
        cout<<new_ch[0]<<endl;
    return 0;
}
