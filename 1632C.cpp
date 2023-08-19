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
constexpr ll MOD=1e9+7;
const int limit=1000006;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}

///Wrong Submission solution

void run_case(){

    int a,b;
    cin>>a>>b;

    map<int,int>ma,mb;
    for(int i=0;i<32;i++){

        if((a&(1<<i))) ma[i]=1;
    }

    for(int i=0;i<32;i++){

        if((b&(1<<i))) mb[i]=1;
    }

    int ans=b-a;
    int bit=-1;
    for(int i=0;i<32;i++){

        if(ma[i]==1 && mb[i]==0) bit=i;
    }

    ///a=a|b
    if(bit==-1){
        cout<<1<<endl;
        return;
    }

    ///change 'b' to 'a' till a'bit=1 and b'bit=0;
    int aa=0,bb=0;
    for(int i=0;i<=bit;i++){

        if(mb[i]) bb+=pow(2,i);
        if(ma[i]) aa+=pow(2,i);
    }

    ans=min(ans,(aa-bb)+1);

    ///change 'a' to 'b' till b'bit=1 and a'bit=0;
    for(int i=bit+1;i<32;i++){

        if(ma[i]==0 && mb[i]==1){

            int change=pow(2,i)-aa;
            ans=min(ans,change+1);
        }
        else if(ma[i]){
            aa+=pow(2,i);
        }
    }
    cout<<ans<<endl;

    return;
}

int main(){
    fast;
    init_code();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}



