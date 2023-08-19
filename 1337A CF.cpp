#include<iostream>
using namespace std;

int main()
{
    int t;
    long long a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;

            if((a+b)>c&&(b+c)>a&&(a+c)>b)
                cout<<a<<" "<<b<<" "<<c<<endl;
            else if((b+c)>d&&(b+d)>c&&(d+c)>b)
                cout<<b<<" "<<c<<" "<<d<<endl;
            else if((a+b)>d&&(a+d)>b&&(b+d)>a)
                cout<<a<<" "<<b<<" "<<d<<endl;
            else if((a+c)>d&&(a+d)>c&&(c+d)>a)
                cout<<a<<" "<<c<<" "<<d<<endl;
            else
                cout<<b<<" "<<c<<" "<<c<<endl;

    }
    return 0;
}
