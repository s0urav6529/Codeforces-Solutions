#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int tc;
    string a,b,c;
    cin>>tc;
    while(tc--)
    {
        int i=0;
        cin>>a>>b>>c;
        while(c[i]!='\0')
        {
            if(c[i]==a[i])
                b[i]=c[i];
            else
                a[i]=c[i];
            i++;
        }
        if(a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

