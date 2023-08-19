#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{

    vector<pair<int,int>>v;
    int t,n,x,y;
    string s="";
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        vector<pair<int,int>>::iterator it=v.begin();
        int dx=0,dy=0;
        while(it!=v.end())
        {
            if(it==v.begin())
            {
                dx=it->first-0;
                dy=it->second-0;
                x=it->first;
                y=it->second;
                for(int i=1;i<=dx;i++)
                    s+="R";
                for(int i=1;i<=dy;i++)
                    s+="U";
                it++;
                continue;
            }
            else if(it->first>x&&it->second==y)
            {
                dx=it->first-x;
                x=it->first;
                for(int i=1;i<=dx;i++)
                    s+="R";
            }
            else if(it->second>y&&it->first==x)
            {
                dy=it->second-y;
                y=it->second;
                for(int i=1;i<=dy;i++)
                    s+="U";
            }
            else if(it->first>x&&it->second>y)
            {
                dx=it->first-x;
                dy=it->second-y;
                x=it->first;
                y=it->second;
                for(int i=1;i<=dx;i++)
                    s+="R";
                for(int i=1;i<=dy;i++)
                    s+="U";
            }
            else if(it->first<x||it->second<y)
            {
                dx=0;dy=0;
                cout<<"NO"<<endl;
                break;
            }
            it++;
        }
        if(dx>0||dy>0)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        v.clear();
        s="";
    }
    return 0;
}
