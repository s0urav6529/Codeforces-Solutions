#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep(j,i,k) for (int i=j ; i<k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)     cout<<fixed<<setprecision(y)<<x<<endl;
#define pf(a)         cout<<a<<endl;
#define ppf(a,b)      cout<<a<<" "<<b<<endl;
#define pppf(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl;
#define nl           endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
//cin.get();
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=998244353;
const int limit=100005;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

}

vector<pair<int,int>>xco,yco;
vector<pair<int,ll>>gra[limit];
int n,m,sx,sy,ex,ey;

void addTostart(){

    for(int i=0;i<m;i++){

        ll mnw=min(abs(sx-xco[i].ff),abs(sy-yco[i].ff));

        gra[0].pb({xco[i].ss,mnw});

    }

}

void addToend(){

    for(int i=0;i<m;i++){

        ll w=abs(ex-xco[i].ff)+abs(ey-yco[i].ff);

        gra[xco[i].ss].pb({m+1,w});
    }

    ll w=abs(ex-sx)+abs(ey-sy);
    gra[0].pb({m+1,w});

}

void addInstantedges(vector<pair<int,int>>&v){

    for(int i=1;i<v.size();i++){

        int node1=v[i-1].ss;
        int node2=v[i].ss;

        ll w=v[i].ff-v[i-1].ff;

        gra[node1].pb({node2,w});
        gra[node2].pb({node1,w});

    }
}

void run_case(){


    cin>>n>>m>>sx>>sy>>ex>>ey;

    for(int i=1;i<=m;i++){

        int x,y;
        cin>>x>>y;
        xco.pb({x,i});
        yco.pb({y,i});
    }
    addTostart();
    addToend();

    sortv(xco);
    sortv(yco);
    addInstantedges(xco);
    addInstantedges(yco);

    vector<ll>dis(m+2,1e16);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>pq;

    dis[0]=0;
    pq.push({0,0});
    while(!pq.empty())
    {
        ll weight=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(pair<int,int>child:gra[node]){

            if(weight+child.second<dis[child.first]) {

                //cout<<node<<" "<<child.ff<<" "<<child.ss<<endl;
                dis[child.first]=weight+child.second;
                pq.push({dis[child.first],child.first});
            }
        }
    }
    cout<<dis[m+1]<<endl;

    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}


