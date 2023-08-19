#include<iostream>
using namespace std;
int main()
{
    int n,ok=0,x,temp;
    cin>>n;
    temp=n;
    while(n)
    {
        x=n%10;
        if(x==7||x==4)
            ok=1;
        else
        {
            ok=0;
            break;
        }
        n=n/10;
    }
    if(ok==0)
    {
        if(temp%4==0||temp%7==0||temp%47==0||temp%74==0||temp%444==0||temp%777==0||temp%447==0||temp%474==0||temp%744==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
    return 0;
}
