#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int l,i,val=2;
    string s,ns="";
    cin>>l>>s;
    int len=s.size()-1;
    i=0;
    while(i<=len)
    {
        ns+=s[i];
        i+=val;
        val++;
    }
    cout<<ns;
    return 0;
}


