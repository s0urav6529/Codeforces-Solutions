#include<bits/stdc++.h>
using namespace std;
int a[100];
int b[100];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;int cnt=1;
        int a[n+5];
        int b[m+5];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>x;if(x==1)a[i]=x,b[j]=x;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)continue;
            for(int j=1;j<=m;j++)
            {
                if(b[j]==1)continue;
                a[i]=1;b[j]=1;cnt++;break;
            }
        }
        if(cnt&1)cout<<"Vivek"<<endl;
        else cout<<"Ashish"<<endl;
    }
    return 0;
}
