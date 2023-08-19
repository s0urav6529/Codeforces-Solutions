#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>v;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n,a,b,f,x,cnt=0,sum=0;
    cin>>n>>a>>b;cin>>f;sum+=f;
    for(int i=1;i<n;i++) cin>>x,v.push_back(x),sum+=x;
    sort(v.begin(),v.end(),greater<int>());
    auto it=v.begin();
    while(it!=v.end()){if(((a*f)/sum)<b)sum-=*it,cnt++,it++; else break;}
    cout<<cnt<<endl;
    return 0;
}
