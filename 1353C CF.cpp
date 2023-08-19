#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=n;i>1;i-=2)
        {
            sum+=(((n*2)+((n-2)*2))*(n/2));
            n-=2;
        }
        cout<<sum<<endl;
        sum=0;

    }
    return 0;
}
