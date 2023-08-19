#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int s,v1,v2,t1,t2,fst,snd;
    cin>>s>>v1>>v2>>t1>>t2;
    fst=(s*v1)+t1+t1;
    snd=(s*v2)+t2+t2;
    if(fst>snd)
        cout<<"Second"<<endl;
    else if(fst<snd)
        cout<<"First"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
