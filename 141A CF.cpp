#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int len;
    char ch1[104],ch2[104],new_ch[210];
    cin>>ch1;
    cin>>ch2;
    strcpy(new_ch,strcat(ch1,ch2));
    len=strlen(new_ch);
    sort(new_ch,new_ch+len);
    cin>>ch1;
    len=strlen(ch1);
    sort(ch1,ch1+len);
    if(!strcmp(new_ch,ch1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
