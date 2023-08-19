#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
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
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

vector<ll>adj[limit];
vector<int>len(limit);
ll mid,lagbe;

void dfs(int node,int par){


    for(int child: adj[node]){

        if(child!=par){

            dfs(child,node);

            len[node] = max(len[node] , len[child]);

        }
    }
    len[node] = max(1,1+len[node]);

    if(len[node] == mid && (par>1)) len[node] = 0 , lagbe++;

}


void run_case(){

    ll n , k;
    cin >> n >> k;

    for(int i=1;i<=n;i++) adj[i].clear();

    for(int i=2;i<=n;i++){
        int p;
        cin >> p;

        adj[p].pb(i);
        adj[i].pb(p);

    }

    ll l = 1, r= n , ans = n+1;

    while(l<=r){

        mid = l+(r-l)/2 , lagbe = 0;

        for(int i=1;i<=n;i++) len[i]=0;

        dfs(1,-1);

        if(lagbe>k){
            l = mid+1;
        }
        else {
            ans=min(ans,mid);
            r = mid-1;
        }
    }
    cout<<ans<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

