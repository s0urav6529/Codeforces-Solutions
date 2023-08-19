#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,s=0,f=0;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='F'&&ch[i+1]=='S')
            f++;
        else if(ch[i]=='S'&&ch[i+1]=='F')
            s++;
    }
    if(s>f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
