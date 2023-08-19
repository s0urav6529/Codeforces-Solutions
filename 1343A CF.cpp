#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int k=2;;k++)
        {
            int x=pow(2,k);
            if(n%(x-1)==0)
            {
                cout<<n/(x-1)<<endl;
                break;
            }
        }
    }
    return 0;
}
