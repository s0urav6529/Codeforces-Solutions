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
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
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
const int limit=100005;

int n;
ll ans(vector<pii>&a,vector<pii>&b){

    vector<int>pos;
    int i=1,ai=0,bi=0;
    ll res=0;
    while(i<=n){
        if(i&1){

            int x=a[ai].ss;

            if(x>i) res+=(x-i);
            ai++;
        }
        else{
            int x=b[bi].ss;
            if(x>i) res+=(x-i);
            bi++;
        }
        i++;
    }
    return res;
}

void solution(){
    cin>>n;
    vector<pii>even,odd;
    rep(i,n) {
        int x;
        cin>>x;
        if(x&1) odd.pb({x,i});
        else even.pb({x,i});
    }
    if(n%2==0){
        if(odd.size()==n/2){
            ll res=ans(odd,even);
            res=min(res,ans(even,odd));
            cout<<res<<endl;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    else {

        int x=n/2+1;

        if(x==odd.size()){
            cout<<ans(odd,even)<<endl;
        }
        else if(x==even.size()){
            cout<<ans(even,odd)<<endl;
        }
        else {
            cout<<-1<<endl;
            return;
        }

    }
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


