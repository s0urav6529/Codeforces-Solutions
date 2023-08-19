#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,a1,a2,b1,b2;
    cin>>t;
    while(t--)
    {
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(((a1==a2)&&(b1+b2==a1))||((a1==b2)&&(b1+a2==a1)))
            cout<<"YES"<<endl;
        else if(((b1==a2)&&(a1+b2==b1))||((b1==b2)&&(a1+a2==b1)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
