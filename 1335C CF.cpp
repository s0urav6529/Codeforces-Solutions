#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
set<int>s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,mx=0,x,key;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
            s.insert(x);
            mx=max(mx,mp[x]);
        }
        int setsize=s.size()-1;
        if(setsize<mx)
        {
            if(setsize+mx<=n)
            {
                setsize++;
                mx--;
            }
        }
        cout<<min(setsize,mx)<<endl;
        mx=0;
        mp.clear();
        s.clear();
    }
    return 0;
}
