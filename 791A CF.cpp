#include<iostream>
using namespace std;
int main()
{
    int l,b,i;
    cin>>l>>b;
    for(i=1;;i++)
    {
        l=(l*3);
        b=(b*2);
        if(l>b)
            break;
    }
    cout<<i<<endl;
    return 0;
}
