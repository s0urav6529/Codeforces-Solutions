#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int c,a=0,b=0,temp;
    char s[51];
    cin>>s;
    c=strlen(s);
    for(int i=0;i<c;i++)
    {
        if(s[i]=='a')
            a++;
        else
            b++;
    }
    if(c/2<a)
        cout<<c<<endl;
    else if(b==a)
    {
        cout<<c-1<<endl;
    }
    else
    {
        temp=(c-b);
        if(temp==a)
        {
            --temp;
            cout<<a+temp<<endl;
        }
    }
    return 0;
}
