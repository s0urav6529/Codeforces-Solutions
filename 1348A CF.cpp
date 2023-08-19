#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,fs=0,ls=0,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p=n/2;
        for(int i=1;i<=n;i++)
        {
            if(i<p||i==n)
                fs+=pow(2,i);
            else
                ls+=pow(2,i);
        }
        cout<<fs-ls<<endl;
        fs=0;ls=0;
    }
    return 0;
}
