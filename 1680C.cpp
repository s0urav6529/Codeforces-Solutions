#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep(j,i,k) for (int i=j ; i<k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)     cout<<fixed<<setprecision(y)<<x<<endl;
#define pf(a)         cout<<a<<endl;
#define ppf(a,b)      cout<<a<<" "<<b<<endl;
#define pppf(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl;
#define nl           endl;
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
constexpr ll MOD=998244353;
const int limit=200005;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

}
vector<int>zpos,rone,lone;

bool ok(int m){

    if(m>(zpos.size()-2)) return true;
    int ss=zpos.size();
    for(int l=1,r=m;r<ss-1;r++,l++){

        int r1=rone[zpos[r+1]];
        int l1=lone[zpos[l-1]];
//        ppf(zpos[l-1],zpos[r+1]);
//        pppf(m,lone[zpos[l-1]],rone[zpos[r+1]]);

        if(r1+l1<=m) return true;
    }
    return false;

}

void run_case(){
    int n;
    string s;
    cin>>s;
    n=s.size();


    int len=0,seg=0;
    char bef='?';
    bool f=false;
    for(char c:s){
        if(c!=bef){
            if(len){
                seg++;
                if(seg==2 && bef=='1') f=true;
            }
            len=1;
        }
        else len++;
        bef=c;
    }
    if(len) seg++;


    if(seg<=2 || (seg==3 && f)){  ///000111 , 0010, 0000 , 1111
        cout<<0<<endl;
        return;
    }
    zpos.clear();
    lone.clear();
    rone.clear();
    zpos.pb(0); ///pos of 0
    lone.pb(0); ///no of 1
    rone.pb(0); ///no of 1

    for(int i=0;i<n;i++){
        if(s[i]=='0') zpos.pb(i);
    }

    for(int i=0;i<n;i++){

        int prev=lone.back();
        if(s[i]=='1') lone.pb(1+prev);
        else lone.pb(prev);
    }

    for(int i=n-1;i>=0;i--){
        int prev=rone.back();
        if(s[i]=='1') rone.pb(1+prev);
        else rone.pb(prev);
    }
    zpos.pb(n);
    rev(rone);

    int l=1,h=n,ans=n;
    while(l<=h){

        int mid=l+(h-l)/2;

        if(ok(mid)){
            umin(ans,mid);
            h=mid-1;
        }
        else l=mid+1;

    }
    cout<<ans<<endl;



    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}


