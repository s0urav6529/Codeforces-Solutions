#include<iostream>
#include<math.h>
using namespace std;
using ll=long long;
int main()
{
    int t,cnt=0;
    ll n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n>1)
        {
            m=(-1+sqrt(1+(24*n)))/6;
            m=(m*(3*m+1))/2;
            n-=m;
            cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
