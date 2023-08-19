

///single source shortest path from a root node using dijkastra algorithm
///Time complexity O(v logv+e) ///logv for sorting the priority queue

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    int n,e;
    cin>>n>>e;

    vector<pair<int,int>>adj[n+1];

    map<pair<int,int>,int>mp;

    vector<ll>dis(n+1,1e12);

    for(int i=1;i<=e;i++){
        int x,y,w;
        cin>>x>>y>>w;

        if(x==y) continue;

        if(mp[{x,y}]){
            int mn=mp[{x,y}];
            mp[{x,y}]=min(mn,w);
        }
        else mp[{x,y}]=w;
    }

    for(auto i:mp){

        int x=i.first.first;
        int y=i.first.second;
        ll w=i.second;

        //cout<<x<<" "<<y<<" "<<w<<endl;

        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }


    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>pq;

    int visitor[n+2];
    for(int i=1;i<=n;i++) visitor[i]=i;

    dis[1]=0;
    pq.push({0,1});
    while(!pq.empty())
    {
        ll weight=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(pair<int,int>child:adj[node]){

            if(weight+child.second<dis[child.first]) {
                dis[child.first]=weight+child.second;
                visitor[child.first]=node;
                pq.push({dis[child.first],child.first});
            }
        }

    }

    if(dis[n]==1e12) {
        cout<<-1<<endl;
    }
    else{


        vector<int>ans;
        ans.push_back(n);

        int i=n;
        while(visitor[i]!=1){

            ans.push_back(visitor[i]);
            i=visitor[i];
        }
        ans.push_back(1);

        reverse(ans.begin(),ans.end());
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}

/*

6 9
1 2 4
1 6 2
2 3 5
2 6 1
6 3 8
6 5 10
3 4 6
3 5 3
5 4 5
*/




