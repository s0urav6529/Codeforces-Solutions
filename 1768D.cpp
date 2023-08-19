#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1e9+7;
const int limit=2e5+5;

vector<int>adj[limit];
bool vis[limit]={false};
int cycle_id[limit];

int cycle;

void dfs(int node, int id){

    vis[node] = true;
    cycle_id[node] = id;

    for(int child : adj[node]){

        if(vis[child] == false){

            dfs(child,id);
        }

    }

}


void an1nd1ta(int tc){
    
    int n;
    cin >> n;

    int a[n+5];

    for(int i=1;i<=n;i++){

        adj[i].clear();
        vis[i] = false;
        cycle_id[i] = 0;
    }

    for(int i=1;i<=n;i++) {

        cin >> a[i];
        adj[i].pb(a[i]);

    }

    cycle = 0;

    int id = 0;

    for(int i=1;i<=n;i++){

        if(vis[i] == false){

            cycle++;
            dfs(i,++id);

        }

    }

    int ans = n -cycle;

    bool ok = false;

    for(int i=1;i<n;i++){

        if(cycle_id[i] == cycle_id[i+1]){
            ans --;
            ok = true;
            break;
        }

    }
    if(!ok) ans++;
    
    cout<<ans<<endl;


    	
    return;
}

int main(){
    fast;
    int testcase=1;
    cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}