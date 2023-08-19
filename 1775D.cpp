#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen  ("out.txt","w",stdout);
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
#define p3f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1e9+7;
const int limit=3e5+5;

bool vis[limit] , p_vis[limit];
vector<int>primes;
vector<int>adj[limit];

void seive(){

    vis[0]=vis[1]=1;

    for(int i=4; i<limit; i+=2) vis[i] = 1;

    for(int i=3; i*i<limit; i+=2){

        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i) {
            vis[j] = 1;
        }
    }

    primes.pb(2);

    for(int j=3; j<limit; j+=2){
        if(vis[j]==0) primes.pb(j);
    }
}

void an1nd1ta(int tc){

    int n;

    cin >> n;

    int a[n+5];

    vector<int>factors[n+1];
    vector<int>index(n+1);

    for(int i=1; i<= n; i++){

        cin >> a[i];

        int N = a[i];

        for(int j=0; primes[j]*primes[j] <= N ; j++){

            bool ok = false;

            while(N % primes[j] == 0){

                ok = true;

                N /= primes[j];

            }

            if(ok){

                adj[primes[j]].pb(i);
                factors[i].pb(primes[j]);
            }

        }

        if(N > 1){
            adj[N].pb(i);
            factors[i].pb(N);
        }
    }
    int s , t;
    cin >> s >> t;

    if(s != t && (a[s] == 1 || a[t] == 1)){
        cout << -1 <<endl;
        return;
    }

    if(s == t){
        cout << 1 <<endl << s <<endl;
        return;
    }

    vector<int>dist(n+1,1e8) , par(n+1,0);

    for(int i=1;i<=n;i++) vis[i] = false;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    dist[s] = 1;
    par[s] = s;

    pq.push({1,s});

    while(pq.size() > 0){

        int w = pq.top().first;
        int id = pq.top().second;
 
        pq.pop();

        if(vis[id]) continue;
        vis[id] = true;

        for(int prime : factors[id]){

            if(p_vis[prime]) continue;
            p_vis[prime] = true;

            for(int child : adj[prime]){

                if((a[child] == a[id] && (child != t)) || child == id) continue;
                //cout <<id <<" "<<a[id] <<" "<<child <<" "<<a[child]<<endl;

                if( w + 1 <= dist[child]){

                    dist[child] = w + 1;

                    pq.push({dist[child] , child});
                    par[child] = id;

                }

            }

        }
    }

    if(dist[t] == 1e8){
        cout << -1 << endl;
    }

    else{

        vector<int>path;
        path.pb(t);

        while(par[t] != s){

            path.pb(par[t]);

            t = par[t];
        }
        path.pb(s);

        rev(path);
        cout <<path.size()<<endl;
        for(int i=0;i<path.size();i++) {
            cout << path[i]<<" ";
        }

    }

    return;
}

int main(){
    fast;
    seive();
    int testcase=1;
    //cin >> testcase;
    for(int T=1;T<=testcase;T++) an1nd1ta(T);
    return 0;
}
