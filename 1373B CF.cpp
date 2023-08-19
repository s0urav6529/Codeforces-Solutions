#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int cnt0=0,cnt1=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')cnt0++;
            else cnt1++;
        }
        if(cnt1==0||cnt0==0)cout<<"NET"<<endl;
        else
        {
            int mn=min(cnt1,cnt0);
            if(mn&1)cout<<"DA"<<endl;
            else cout<<"NET"<<endl;
        }
    }
    return 0;
}
