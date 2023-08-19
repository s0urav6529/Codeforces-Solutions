#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
#define rep(i,k)  for (int i=1 ; i<=k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
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
constexpr ll MOD=1e9+7;
const int limit=1005;

vector<int>p_macho(limit,-1),p_diana(limit,-1);
vector<int>R_macho(limit,1),R_diana(limit,1);

vector<pair<int,int>>ans;

int m_find(int a){

    if(p_macho[a]<0) return a;

    return p_macho[a]=m_find(p_macho[a]);
}

void m_Union(int a,int b){

    a=m_find(a);
    b=m_find(b);

    if(a!=b){
        if(R_macho[b]>R_macho[a]) swap(a,b);

        R_macho[a]+=R_macho[b],p_macho[b]=a;
    }
}

int d_find(int a){

    if(p_diana[a]<0) return a;

    return p_diana[a]=d_find(p_diana[a]);
}

void d_Union(int a,int b){

    a=d_find(a);
    b=d_find(b);

    if(a!=b){
        if(R_diana[b]>R_diana[a]) swap(a,b);

        R_diana[a]+=R_diana[b],p_diana[b]=a;
    }
}

void solution(){

    int n,m,d;
    cin>>n>>m>>d;

    while(m--){
        int a,b;
        cin>>a>>b;
        m_Union(a,b);
    }
    while(d--){
        int a,b;
        cin>>a>>b;
        d_Union(a,b);
    }

    for(int i=1;i<=n;i++){

        for(int j=i+1;j<=n;j++){

            if((m_find(i)!=m_find(j)) && (d_find(i)!=d_find(j))){

                ans.pb({i,j});
                m_Union(i,j);
                d_Union(i,j);
            }
        }
    }

    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i.ff<<" "<<i.ss<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}


