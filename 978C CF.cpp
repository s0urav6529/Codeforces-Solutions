#include<bits/stdc++.h>
#include<vector>
using ll=long long;
using  namespace std;
ll sum[200002];
int bin_search(int,int,long long int);
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    vector<pair<int,ll>>v;
    int n,m,f;
    ll point,dor;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>point,sum[i]=sum[i-1]+point;
    for(int i=1;i<=m;i++)
    {
        cin>>point;
        f=bin_search(1,n,point);
        dor=point-sum[f-1];
        v.push_back(make_pair(f,dor));
    }
    auto it=v.begin();
    while(it!=v.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    v.clear();
    return 0;
}
int bin_search(int l,int h,ll s)
{
    int m,found=0;
    while(l<=h)
    {
        m=(l+h)/2;
        if(sum[m]==s) return m;
        else if(sum[m]<s) l=m+1;
        else found=m,h=m-1;
    }
    if(found>0)return found;
}
