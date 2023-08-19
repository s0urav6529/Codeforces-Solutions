#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,s;
    char ch[5],cch[2]={'O','O'};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch[0]==cch[0]&&ch[1]==cch[1]||ch[3]==cch[0]&&ch[4]==cch[1])
        {
            s=1;
            if(ch[0]==cch[0]&&ch[1]==cch[1]){
                ch[0]='+';
                ch[1]='+';
            }
            else if(ch[3]==cch[0]&&ch[4]==cch[1])
            {
                ch[3]='+';
                ch[4]='+';
            }

        }
        else s=0;
    }
    if(s==1)
    {
        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;
    return 0;
}


