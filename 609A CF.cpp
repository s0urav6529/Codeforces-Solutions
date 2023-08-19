#include<iostream>
#include<stdio.h>
#include<algorithm>
int ara[1001];
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,m,c=0,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        sum+=ara[i];
        c++;
        if(sum>=m)
            break;
    }
    cout<<c<<endl;
    return 0;
}
