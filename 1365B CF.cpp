#include<bits/stdc++.h>
using namespace std;
int a[505];
int b[505];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;int one=0;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++){cin>>b[i];if(b[i]&1)one++;}
        if(is_sorted(a+1,a+n+1))cout<<"YES"<<endl;
        else if(one==n||one==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
