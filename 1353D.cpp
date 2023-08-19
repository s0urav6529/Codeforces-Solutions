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
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=1000001;

struct node{

    int l,r;
    node(int lft,int rth){

        l=lft;
        r=rth;
    }
};

bool operator<(node a,node b){

    if(a.r-a.l==b.r-b.l){
        return a.l>b.l;
    }
    return a.r-a.l<b.r-b.l;

}
void solution(){
    priority_queue<node>pq;
    int n;
    cin>>n;
    int a[n+1];

    pq.push({1,n});

    int y=0;
    while(!pq.empty()){

        node x=pq.top();
        pq.pop();

        int lft=x.l;
        int rth=x.r;
        int mid;

        if((rth-lft+1)&1) mid=(lft+rth)/2;
        else mid=(lft+rth-1)/2;

        a[mid]=++y;

        //cout<<a[mid]<<" ";

        if(lft<=mid-1) pq.push({lft,mid-1});
        if(rth>=mid+1) pq.push({mid+1,rth});

    }

    rep(i,n) cout<<a[i]<<" ";
    cout<<endl;


    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}
 
