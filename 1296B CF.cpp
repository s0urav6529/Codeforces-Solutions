#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    int t;
    ll n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n;
        while(x>=10)
        {
            ll p=x;
            x=x/10;
            n+=x;
            x+=(p%10);
        }
        cout<<n<<endl;
    }
    return 0;
}
