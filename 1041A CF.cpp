#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
int ara[1001];
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n,greater<int>());
    for(int i=0;i<n-1;i++)
    {
        if(ara[i]-ara[i+1]==1);
        else
            sum+=(ara[i]-ara[i+1]-1);
    }
    cout<<sum<<endl;
    return 0;
}
