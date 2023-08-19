#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    vector<int>v;
    vector<int>v1;
    int n,in,x=0,j=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it=v.begin(),it1;
    while(it!=v.end())
    {
        it1=it;
        it1++;
        while(it1!=v.end())
        {

            if(*it1%*it==0)
            {
                if(*it1==*it);
                else
                    x=1;
                break;
            }
            it1++;
        }
        if(x==0)
            v1.push_back(*it);
        it++;
        x=0;

    }
    sort(v1.begin(),v1.end(),greater<int>());
    vector<int>::iterator p=v1.begin();
    while(p!=v1.end())
    {
        cout<<*p<<" ";
        p++;
        j++;
        if(j==2)
            break;
    }
    if(v1.size()==1)
    {
        cout<<1<<endl;
    }
    return 0;
}
