#include<iostream>
using namespace std;
int main()
{
    int n,c2=0,c3=0;
    cin>>n;
    while(n)
    {
        if(n==3)
        {
            n=n-3;
            c3++;
        }
        else
        {
            n=n-2;
            c2++;
        }
    }
    cout<<c2+c3<<endl;
    for(int i=1;i<=c2;i++)
        cout<<"2"<<" ";
    for(int i=1;i<=c3;i++)
        cout<<"3"<<" ";
    cout<<endl;
    return 0;
}
