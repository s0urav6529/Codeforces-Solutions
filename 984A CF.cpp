#include<iostream>
#include<algorithm>
int ara[1001];
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    t=(n-1)/2;
    cout<<ara[t]<<endl;
    return 0;
}
