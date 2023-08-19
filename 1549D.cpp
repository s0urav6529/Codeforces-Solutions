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
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
constexpr int limit=2e5+1;


ll a[limit];
ll tree[limit*4];

ll find_gcd(int index,int b,int e,int x,int y)
{
    if(e<x || b>y)
        return 0;
    if(b>=x && e<=y)
        return tree[index];

    int left_index=index*2;
    int right_index=index*2+1;

    int mid=(b+e)>>1;

    ll GCD=__gcd(find_gcd(left_index,b,mid,x,y),find_gcd(right_index,mid+1,e,x,y));

    return GCD;
}
void built_tree(int index,int b,int e,int pos,ll val)
{
    if(b==e)
    {
        tree[index]=val;
        return;
    }
    int left_index=index*2;
    int right_index=index*2+1;

    int mid=(b+e)>>1;

    if(pos<=mid)built_tree(left_index,b,mid,pos,val);
    else built_tree(right_index,mid+1,e,pos,val);

    tree[index]=__gcd(tree[left_index],tree[right_index]);
}

void solution(){

    int n;
    scanf("%d",&n);

    ll prev;
    scanf("%lld",&prev);
    for(int i=2;i<=n;i++){
        ll pres;
        scanf("%lld",&pres);
        a[i-1]=abs(prev-pres);
        built_tree(1,1,n-1,i-1,a[i-1]);
        prev=pres;
    }
    n--;
    //built_tree(1,1,n);

    int ans=1;
    for(int i=1;i<=n;i++){

        int l=i,h=n;

        while(l<=h){

            int mid=l+(h-l)/2;


            if(find_gcd(1,1,n,i,mid)>1ll){
                ans=max(ans,mid-i+2);
                l=mid+1;
            }
            else h=mid-1;
        }

    }
    printf("%d\n",ans);
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    scanf("%d",&tc);
    while(tc--) solution();
    return 0;
}

