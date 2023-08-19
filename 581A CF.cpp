#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    if(n>x)
    {
        n=n-x;
        n=n/2;
        cout<<x<<" "<<n<<endl;
    }
    else if(n<x)
    {
        x=x-n;
        x=x/2;
        cout<<n<<" "<<x<<endl;
    }
    else
    {
        cout<<n<<" "<<"0"<<endl;
    }

    return 0;
}




