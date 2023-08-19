#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,m;
    double sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if((n==1&&m>1)||(m==1&&n>1)||(n==2&&m==2)||(n==1&&m==1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}

