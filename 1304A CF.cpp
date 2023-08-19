#include<iostream>
using namespace std;
int main()
{
    long long int x,y,a,b,counter=0;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0)
            cout<<((y-x)/(a+b))<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
