#include<iostream>
int vid[100000];
using namespace std;
int main()
{
    int t,a,b,x,y,maxi;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y;
        maxi=max(max(x,(a-1-x))*b,max(y,(b-1-y))*a);
        cout<<maxi<<endl;
    }

    return 0;
}
