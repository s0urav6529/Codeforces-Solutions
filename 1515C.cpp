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

void solution()
{
    priority_queue<pair<ll,ll >,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pm;
    ll n,b,k;
    cin>>n>>b>>k;
    ll a[n+5];
    fr1(1,i,n,1)  cin>>a[i];
    ll bb[b+5];
    //sort(a.begin(),a.end(),greater<int>());
    ll mx=0;
    ll curb=1;
    vector<ll>ans;
    for(int i=1;i<=b;i++){
        curb=i;
        umax(mx,a[i]);
        //cout<<a[i]<< " ";
        pm.push({a[i],i});
        bb[i]=a[i];
        ans.pb(i);
    }
    while(!(pm.empty())){
        curb++;
        //cout<<curb<<" ";
        pair<ll,ll> r =pm.top();
        //cout<<r.ff<<" "<<r.ss<<endl;
        pm.pop();
        ll cb=r.ff;
        ll p=r.ss;
        if(curb>n) {
            break;
        }
        cb+=a[curb];
        umax(mx,cb);
        bb[p]=cb;
        pm.push({cb,p});
        ans.push_back(p);
    }
    //cout<<endl;
    for(int i=1;i<=b;i++)
    {
        if(mx-bb[i]>k) {
            pno;
            return;
        }
    }
    pyes;
    for(auto i:ans) cout<<i<<" ";
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
    while(tc--)
        solution();
    return 0;
}


