#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,x;
    double s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s+=x;
    }
    double g=s/n;
    cout<<setprecision(12)<<setiosflags(ios::fixed)<<g<<endl;
    return 0;
}



