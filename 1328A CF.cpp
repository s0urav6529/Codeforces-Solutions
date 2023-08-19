#include<iostream>
using namespace std;
int main()
{

    long long int a,b,x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else if(a<b)
            cout<<b-a<<endl;
        else
        {
            x=a/b;
            x=b*(x+1);
            cout<<x-a<<endl;
            x=0;
        }
    }
    return 0;
}
