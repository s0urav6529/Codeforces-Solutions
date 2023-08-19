#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int ara[100];
int main()
{
    string str;
    int sum=0;
    for(int i=0;i<=3;i++)
        cin>>ara[i];
    cin>>str;
    for(int i=0;i<str.size();i++)
        sum+=ara[str[i]-'0'-1];
    cout<<sum<<endl;
    return 0;
}

