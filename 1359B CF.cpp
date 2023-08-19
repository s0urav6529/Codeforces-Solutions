#include<bits/stdc++.h>
using namespace std;
using ll=long long;
char ara[105][1005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,m,x,y;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n>>m>>x>>y;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                cin>>ara[i][j];}
        y=min((2*x),y);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                {
                    if(j<m&&ara[i][j]=='.'&&ara[i][j+1]=='.')ans+=y,j++;
                    else if(ara[i][j]=='.')ans+=x;
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}


