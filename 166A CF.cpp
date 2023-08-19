#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
vector<pair<int,int>>v;
map<pair<int,int>,int>mp;
bool sortby(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)return a.second<b.second;
    return a.first>b.first;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie();
    int n,k,m,j;
    cin>>n>>k;
    for(int i=0;i<n;i++){cin>>m>>j;v.push_back(make_pair(m,j));mp[make_pair(m,j)]++;}
    sort(v.begin(),v.end(),sortby);
    auto it=v.begin();
    int cnt=0;
    while(it!=v.end())
    {
        cnt++;
        if(cnt==k){cout<<mp.at(make_pair(it->first,it->second))<<endl;break;}
        it++;
    }
}
