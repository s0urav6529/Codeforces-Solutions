#include<bits/stdc++.h>
using namespace std;
int solve(int n,int mn,int mx)
{
    int l=1,r=mn,ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(((mx/mid)+(mn/mid))>=n)ans=max(ans,mid),l=mid+1;
        else r=mid-1;
    }
    return ans;
}
int main()
{
    int a,b,n;
    cin>>n>>a>>b;
    int mn=min(a,b),mx=max(a,b);
    cout<<solve(n,mn,mx)<<endl;
    return 0;
}
