#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;int flag=0;set<int>s;
        for(i=0;i<n;i++)cin>>x,s.insert(x);
        for(i=1;i<=1024;i++)
        {
            set<int>s2;
            auto it=s.begin();
            while(it!=s.end()){s2.insert(*it^i);it++;}
            if(s==s2){flag=1;break;}
        }
        if(flag==1)cout<<i<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
