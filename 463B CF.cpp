#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x=0,y,ans=0,en=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>y;en+=(x-y);
        if(en<0)ans+=(-en),en=0;
        x=y;
    }
    cout<<ans<<endl;
    return 0;
}
