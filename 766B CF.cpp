#include<iostream>
#include<algorithm>
using namespace std;
int ara[100005];
int main()
{
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<n;i++)
    {
        if((ara[i]+ara[i+1]>ara[i+2])&&(ara[i+1]+ara[i+2]>ara[i])&&(ara[i]+ara[i+2]>ara[i+1])&&(i+2)<n)
        {
            x=1;
            break;

        }
    }
    if(x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}





