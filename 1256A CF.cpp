#include<iostream>
using namespace std;

int main()
{
    int t,a,b,n,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        int x=s/n;
        if(x>a)
            x=a;
        int b1=s-(x*n); 
        if(b1<=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}