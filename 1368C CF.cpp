#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll=long long;
using ld=long double;
int main()
{
    fast;
    int n;
    cin>>n;
    vector<pair<ll,ll>>v;
    v.push_back({0,0});
    v.push_back({0,1});
    v.push_back({1,0});
    v.push_back({1,1});
    while(n--)
    {
        ll x=v.back().first;
        ll y=v.back().second;
        v.push_back({x+1,y});
        v.push_back({x,y+1});
        v.push_back({x+1,y+1});
    }
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it.first<<" "<<it.second<<endl;
    return 0;
}

