#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
constexpr ll MOD=1e9+7;
const int limit=2e5+5;
int ans;

vector<int>adj[limit];
map<pair<int,int>,int>pos,tag;

void dfs(int node,int par){

	for(int ch : adj[node]){

		if(ch != par){

			int x = tag[{par,node}];

			if(pos[{par,node}] > pos[{node,ch}]){
				x++;
				tag[{node,ch}] = x;
			}
			else {
				tag[{node,ch}] = x;
			}
			ans = max(ans,x);
			dfs(ch,node);

		}
	}
}

void an1nd1ta(int tc){
    

    int n;
    cin >> n;

    pos.clear();
    tag.clear();

    for(int i=1;i<=n;i++) adj[i].clear();

    for(int i=1;i<n;i++){

    	int x , y;
    	cin >> x >> y;

  		if(x > y) swap(x,y);
  		
  		adj[x].pb(y);
  		adj[y].pb(x);


  		pos[{x,y}] = i;
  		pos[{y,x}] = i;

    }
    pos[{-1,1}] = n;
    tag[{-1,1}] = 0;

    ans = 0;

    dfs(1,-1);

    cout  << ans <<endl;


    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}