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

int a[limit];
int tree[limit << 2];
int work[limit << 2];

void segment_tree(int node,int b,int e){

    if(b==e){
        tree[node]=a[b];
        work[node] = 0;
        return;
    }

    int mid=(b+e)/2;

    segment_tree( node << 1, b, mid );
    segment_tree( node << 1 | 1, mid+1, e );

    if(work[node<<1]==1) tree[node]= tree[node << 1] ^ tree[node << 1 | 1],work[node]=0;

    else tree[node]= tree[node << 1] | tree[node << 1 | 1],work[node]=1;

}

void update(int node,int b,int e,int uin){

    if(b==e){
        tree[node]=a[uin];
        return;
    }

    int mid=(b+e)/2;

    if(uin<=mid) update(node << 1, b, mid, uin);
    else update(node << 1 | 1 ,mid+1, e, uin);

    if(work[node<<1]==1) tree[node]= tree[node << 1] ^ tree[node << 1 | 1];

    else tree[node]= tree[node << 1] | tree[node << 1 | 1];
}


void run_case(){

    int n,m;
    cin >> n >> m;

    n=pow(2,n);

    for(int i=1;i<=n;i++) cin>>a[i];

    segment_tree(1,1,n);


    while(m--){

        int p,b;
        cin >> p >> b;

        a[p]=b;

        update(1,1,n,p);

        cout<<tree[1]<<endl;
    }


    return;
}

int main(){
    fast;
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}

