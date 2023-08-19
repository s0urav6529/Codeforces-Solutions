#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            if((a+a)>=b)
                cout<<((a*2)*(a*2))<<endl;
            else
                cout<<b*b<<endl;
        }
        else if(a>b)
        {
            if((b+b)>=a)
                cout<<((b*2)*(b*2))<<endl;
            else
                cout<<a*a<<endl;
        }
        else
            cout<<((b*2)*(b*2))<<endl;
    }
}
