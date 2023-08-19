#include<bits/stdc++.h>
using namespace std;
using ll=long long;
set<int>s;
int main()
{
    ll t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>x,s.insert(x);
        int len=s.size();if(len>k)cout<<"-1"<<endl;
        else
        {
            cout<<n*k<<endl;
            while(k--)
            {
                auto it=s.begin();
                while(it!=s.end()){cout<<*it<<" ";it++;}
            }
            cout<<endl;
        }
    }
    return 0;
}

