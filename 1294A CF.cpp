#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    vector<int>v;
    int n,x,in;
    cin>>n;
    while(n--)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        cin>>x;
        sort(v.begin(),v.end(),greater<int>());

        in=v[0]-v[2];if(in>x) x=-1; else x=x-in;
        in=v[0]-v[1];if(in>x) x=-1; else x=x-in;
        if(x%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        v.clear();
    }

}
