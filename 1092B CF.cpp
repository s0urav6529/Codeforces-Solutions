#include<iostream>
#include<algorithm>
using namespace std;
int ara[101];
int main()
{
    //freopen("in.txt","r",stdin);
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<n;i+=2)
    {
        sum+=ara[i+1]-ara[i];
    }
    cout<<sum<<endl;
    return 0;
}
