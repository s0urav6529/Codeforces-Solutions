#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,k,f=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==0)
            cout<<n+(2*k)<<endl;
        else
        {
            int i=3;
            while(i)
            {
                if(n%i==0)
                {
                    n+=i;
                    f=1;
                    break;
                }
                i+=2;
            }
            if(f==0)
                n+=n;
            cout<<n+(2*(k-1))<<endl;
            f=0;
        }
    }
    return 0;
}
