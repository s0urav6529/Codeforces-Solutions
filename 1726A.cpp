
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
const int limit=2e5+5;

vector<vector<int>>adj;
vector<bool>vis;
int cc;


void dfs(int node){

    vis[node]=true;

    for(int ch:adj[node]) {

        if(vis[ch]==false) dfs(ch);
    }
}


void run_case(){

    string s;
    int n; cin >> n >>s;
    int aa[2*n+5];
    int lastoc[n+5];
    vector<int>ache[n+5];
    vis.resize(2*n+5);
    adj.resize(2*n+5);

    for(int i=0;i<=2*n;i++) {

        vis[i]=aa[i]=0;
        adj[i].clear();
        ache[i].clear();

        if(i<=n) lastoc[i]=0,ache[i].clear();

    }


    aa[0]=0;

    for(int i=1;i<=2*n;i++) {

        if(s[i-1]=='(') aa[i]=aa[i-1]+1;

        else aa[i]=aa[i-1]-1;

    }

    lastoc[-1]=lastoc[0]=0;


    for(int i=1;i<=2*n;i++){

        if(s[i-1]=='(') ache[aa[i]].pb(i);

        else {

            int st=lastoc[aa[i]-1];

            //cout<<st<<endl;

            int khujbo=aa[i]+1;

            int id=lower_bound(ache[khujbo].begin(),ache[khujbo].end(),st)-ache[khujbo].begin();

            for(int j=id;j<ache[khujbo].size();j++){

                adj[i].pb(ache[khujbo][j]);
                adj[ache[khujbo][j]].pb(i);
            }

            lastoc[aa[i]]=i;

        }


    }

    cc=0;

    for(int i=1;i<=2*n;i++){

        if(vis[i]==0){
            dfs(i);
            cc++;
        }
    }
    cout<<cc<<endl;



    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
