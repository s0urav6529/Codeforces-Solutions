#include<bits/stdc++.h>
using namespace std;
int a[10005];
int solve(int n,int m)
{
    int l=1,r=m,ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2,cnt=0;
        for(int i=1;i<=m;)
        {
            int p=i+(mid-1);
            if(a[i]==a[p])cnt++,i+=mid;
            else i=find(a+1,a+m+1,a[p])-a;
        }
        if(cnt>=n)ans=max(ans,mid),l=mid+1;
        else r=mid-1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)cin>>a[i];
    sort(a+1,a+m+1);
    cout<<solve(n,m)<<endl;
    return 0;
}

