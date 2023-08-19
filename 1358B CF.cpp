#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>ara[i];
        sort(ara+1,ara+n+1);
        for(int i=1;i<=n;i++)
        {
            if(ara[i]<=i)
                ans=i;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
