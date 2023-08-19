#include<iostream>
int vid[100000];
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m,sum=0;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>vid[i];
            sum+=vid[i];
        }
        if(sum==m)
            cout<<m<<endl;
        else if(sum>m)
            cout<<m<<endl;
        else if(sum<m)
            cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
