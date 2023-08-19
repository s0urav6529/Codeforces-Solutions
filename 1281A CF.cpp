#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    string s;
    char ch;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        int j=0;
        while(s[j]!='\0')
        {
            ch=s[j];
            j++;
        }
        if(ch=='o')
            cout<<"FILIPINO"<<endl;
        if(ch=='u')
            cout<<"JAPANESE"<<endl;
        if(ch=='a')
            cout<<"KOREAN"<<endl;
    }
    return 0;
}
