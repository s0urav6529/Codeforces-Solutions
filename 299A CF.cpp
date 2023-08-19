#include<iostream>
#include<algorithm>
using namespace std;
int ara[1000001];
int main()
{

    int n,c=0,x=1,d;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    d=ara[0];
    for(int i=0;i<n;i++)
    {
        if(ara[i]%d==0);
        else
        {
            x=0;
            break;
        }
    }
    if(x==1)
        cout<<d<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
