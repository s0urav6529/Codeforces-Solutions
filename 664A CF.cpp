#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    string str1,str2;
    cin>>str1>>str2;
    if(str1==str2)
        cout<<str1<<endl;
    else
        cout<<"1"<<endl;

    return 0;
}
