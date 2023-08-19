#include<iostream>
using namespace std;
int main()
{
    int n,nc=0,zc=0;
    char ch[100001];
    cin>>n;
    cin>>ch;
    for(int i=0;i<n;i++){
        if(ch[i]=='n'|| ch[i]=='N')
            nc++;
        else if(ch[i]=='z'||ch[i]=='Z')
            zc++;
    }
    for(int i=1;i<=nc;i++)
        cout<<"1 ";
    for(int i=1;i<=zc;i++)
        cout<<"0 ";
    return 0;
}


