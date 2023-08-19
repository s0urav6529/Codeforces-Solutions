#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
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

#define block 700
int n,t;
int fre[1000001];
ll ans[200001];
int a[200001];
ll power=0;


struct node{
    int l;
    int r;
    int in;
}q[200001];

bool comp(node a,node b){
    if(a.l/block!=b.l/block)
        return a.l/block<b.l/block;

    return a.r<b.r;
}
void add(int pos){

    int x=a[pos];

    ll b_fre=fre[x];
    ll p_fre=++fre[x];

    power-=b_fre*b_fre*x;
    power+=p_fre*p_fre*x;

}
void remove(int pos){
    int x=a[pos];

    ll b_fre=fre[x];
    ll p_fre=--fre[x];

    power-=b_fre*b_fre*x;
    power+=p_fre*p_fre*x;

}


void solution()
{
    cin>>n>>t;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<t;i++){
        cin>>q[i].l>>q[i].r;
        q[i].l--;
        q[i].r--;
        q[i].in=i;
    }

    sort(q,q+t,comp);
    int ML=0,MR=-1;
    for(int i=0;i<t;i++)
    {
        int L=q[i].l;
        int R=q[i].r;

        while(ML>L){
            ML--;
            add(ML);

        }
        while(MR<R){
            MR++;
            add(MR);

        }
        while(ML<L){
            remove(ML);
            ML++;
        }
        while(MR>R){
            remove(MR);
            MR--;
        }
        ans[q[i].in]=power;
    }
    for(int i=0;i<t;i++) cout<<ans[i]<<endl;



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


