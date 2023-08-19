#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int b[100000];
int main()
{
    int t,n,k,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0,j=n-1;i<k&&j>=0;i++,j--)
        {
            if(a[i]<=b[j])
            {
                sum-=a[i];
                a[i]=b[j];
                sum+=b[j];
            }
            else
            {
                if(i>0)
                    i--;
            }
        }
        cout<<sum<<endl;
        sum=0;

    }
    return 0;
}
