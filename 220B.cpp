#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define fr0(p,i,k,z) for (ll i=p ; i<k ; i+=z)
#define fr1(p,i,k,z) for (ll i=p ; i<=k ; i+=z)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;

int block;
int cnt=0;
unordered_map<int,int>fre;
int a[100005];

struct node{
    int l;
    int r;
    int in;
}query[100005];

bool comp(node a,node b){
    if(a.l/block!=b.l/block) return a.l/block<b.l/block;
    return a.r<b.r;
}

void add(int pos){

    if(fre[a[pos]]==a[pos]) cnt--;
    fre[a[pos]]++;
    if(fre[a[pos]]==a[pos]) cnt++;

}

void remove(int pos){

    if(fre[a[pos]]==a[pos]) cnt--;
    fre[a[pos]]--;
    if(fre[a[pos]]==a[pos]) cnt++;
}

void solution()
{
    int n,q;
    cin>>n>>q;
    block=sqrt(n)+1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<q;i++){
        cin>>query[i].l>>query[i].r;
        query[i].l--,query[i].r--;
        query[i].in=i;
    }
    sort(query,query+q,comp);
    vector<int>ans(q);
    int ML=0,MR=-1;
    for(int i=0;i<q;i++){

        int L=query[i].l;
        int R=query[i].r;
        //cout<<L<<" "<<R<<endl;

        while(ML>L){
            ML--,add(ML);
        }
        while(MR<R){
            MR++,add(MR);
        }

        while(ML<L){
            remove(ML),ML++;
        }
        while(MR>R){
            remove(MR),MR--;
        }
        ans[query[i].in]=cnt;
    }

    for(int i=0;i<q;i++){
        cout<<ans[i]<<endl;
    }
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--)
        solution();
    return 0;
}


