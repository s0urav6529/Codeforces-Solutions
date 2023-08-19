#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ara[10001][10001];
int main()
{
    int n,s=0;
    cin>>n;
    memset(ara,1,sizeof(ara));
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ara[i][j]=ara[i-1][j]+ara[i][j-1];
        }
    }

    cout<<ara[n][n]<<endl;
    return 0;
}


