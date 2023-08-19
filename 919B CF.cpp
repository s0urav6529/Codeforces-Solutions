#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    int k,sum=0,cnt=0;
    ll i;
    cin>>k;
    for(i=19;;i++)
    {
        ll x=i;
        while(x!=0)
        {
            sum+=(x%10);
            x=x/10;
        }
        if(sum==10)
            cnt++;
        if(cnt==k)
            break;
        sum=0;
    }
    cout<<i<<endl;
    return 0;
}
