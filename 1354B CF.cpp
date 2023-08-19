#include<bits/stdc++.h>
using namespace std;
int ara[4];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        int ans=200005;ara[1]=0,ara[2]=0,ara[3]=0;
        for(int i=0;i<str.size();i++)
        {
            ara[str[i]-'0']=i+1;
            if(ara[1]>0&&ara[2]>0&&ara[3]>0)
            {
                int mx=max(ara[1],max(ara[2],ara[3]));
                int mn=min(ara[1],min(ara[2],ara[3]));
                ans=min(ans,(mx-mn)+1);
            }
        }
        if(ans==200005)cout<<"0"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
