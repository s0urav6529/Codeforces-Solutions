#include<iostream>
using namespace std;
int main()
{
    int t;
    long long x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x%2==0&&y%2==0)||((x%2==0&&y%2!=0)&&(x-y!=1))||(x%2!=0&&y%2!=0)||((x%2!=0&&y%2==0)&&(x-y!=1)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
