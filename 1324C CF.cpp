#include<bits/stdc++.h>
using namespace std;
string str;
vector<int>v;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    /*int t;
    cin>>t;
    while(t--)
    {
        cin>>str;int ans=0;
        v.push_back(0);
        int len=str.size();
        for(int i=0;i<len;i++)if(str[i]=='R')v.push_back(i+1);
        v.push_back(len+1);
        for(int i=0;i<v.size()-1;i++)ans=max(ans,v[i+1]-v[i]);
        cout<<ans<<endl;
        v.clear();
    }*/
    int p,n,x,ans=0;
    cin>>p>>n;
    for(int i=0;i<n;i++)cin>>x,v.push_back(x);
    for(int i=0;i<v.size();i++)ans=max(ans,v[i+1]-v[i]);
    if(ans<=p)cout<<"YOU WIN"<<endl;
    else cout<<"GAME OVER"<<endl;
    v.clear();
    return 0;
}
