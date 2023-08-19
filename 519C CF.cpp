#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a<b)
    {
        if(a*2<=b)cout<<(a+(a*2))/3<<endl;
        else
        {
            ll p=b/2;b-=(p*2);a-=p;
            p+=(p*2);
            if(a==b)cout<<(p+a+b)/3<<endl;
            else
            {
                p+=(b+(b*2));
                a-=(b*2);a/=3;
                cout<<p/3+a<<endl;
            }
        }
    }
    else if(a>b)
    {
        if(b*2<=a)cout<<(b+(b*2))/3<<endl;
        else
        {
            ll p=b/2;b-=(p*2);a-=p;
            p+=(p*2);
            if(a==b)cout<<(p+a+b)/3<<endl;
            else
            {
                p+=(b+(b*2));
                a-=(b*2);a/=3;
                cout<<p/3+a<<endl;
            }
        }
    }
    else cout<<(a+b)/3<<endl;
    return 0;
}
