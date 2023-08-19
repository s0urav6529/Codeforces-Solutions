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
#define setprecision(y,x)     cout<<fixed<<setprecision(y)<<x<<endl   ///kotoghor , value
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
typedef long double ld;
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=1e5+5;

struct node{
    int ed;
    bitset<32>bs;
};

vector<node> adj[limit];


void run_case(){

    ll n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++) adj[i].clear();

    for(int i=1;i<=q;i++){

        int p,q,val; cin>>p>>q>>val;

        adj[p].pb({q,val});
        adj[q].pb({p,val});

    }

    vector<bitset<32>>ans(n+1,bitset<32>(0));


    for(int bit=0;bit<=30;bit++){

        vector<bool>mustzero(n+1,false),mustone(n+1,false),isone(n+1,false);


        for(int i=1;i<=n;i++){

            for(auto j:adj[i]){

                if(j.bs[bit]==0){
                    mustzero[i]=true;
                }
                else if(j.bs[bit]==1 && i==j.ed){
                    mustone[i]=true;
                }

            }

        }

        for(int i=1;i<=n;i++){

            if(mustzero[i]) continue;

            if(mustone[i]){
                isone[i]=true;
                continue;
            }

            for(auto j:adj[i]){

                if((j.ed<i && isone[j.ed]==false)|| mustzero[j.ed]==true){
                    isone[i]=true;
                }

            }

        }

        for(int i=1;i<=n;i++){
            if(isone[i]) ans[i][bit]=1;
        }

    }

    for(int i=1;i<=n;i++) cout<<ans[i].to_ullong()<<" ";
    cout<<endl;



    return;
}

int main(){
    fast;
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}

