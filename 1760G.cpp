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
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
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
constexpr ll MOD=1000000007;
const int limit=1e5+5;

vector<pair<int,ll>>adj[limit];

set<ll>s;
bool ok=false;
int n,a,b;

void dfs1(int node,int par,ll Xor){

    if(node == b) return;

    s.insert(Xor);

    for(auto child:adj[node]){

        if(child.first == par) continue;

        dfs1(child.first,node,Xor^child.second);
    }
}

void dfs2(int node,int par,ll Xor){

    if(s.find(Xor)!=s.end() && node!=b) {
        ok=true;
        return;
    }


    for(auto child:adj[node]){

        if(child.first == par) continue;
        dfs2(child.first,node,Xor^child.second);
    }
}


void run_case(){

    s.clear();
    cin >> n >> a >> b;

    for(int i=0;i<=n;i++) adj[i].clear();

    for(int i=1;i<n;i++){
        int x,y;
        ll v;
        cin >> x  >> y >> v;

        adj[x].pb({y,v});
        adj[y].pb({x,v});
    }
    dfs1(a,-1,0);
    ok=false;
    dfs2(b,-1,0);

    if(ok) pyes;
    else pno;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

