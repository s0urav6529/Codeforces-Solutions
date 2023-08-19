#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=0,i=1;
    for(cin>>n>>x;i<=n;i++)
    if(x%i==0&&x/i<=n)cnt++;
    cout<<cnt<<endl;
    return 0;
}
