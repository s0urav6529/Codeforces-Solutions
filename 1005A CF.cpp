#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    vector <int>v;
    int n,cnt=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    ara[n]=1;
    for(int i=1;i<=n;i++)
    {
        if(ara[i]==1)
        {
            v.push_back(ara[i-1]);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    vector<int>::iterator it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<" ";
        it++;
    }

    return 0;
}

