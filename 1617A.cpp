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
#define pfp(x,y)     cout<<fixed<<setprecision(y)<<x
#define p(a)         cout<<a<<endl;
#define pp(a,b)      cout<<a<<" "<<b<<endl;
#define ppp(a,b,c)   cout<<a<<" "<<b<<" "<<c<<endl;
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
const int limit=100005;


void solution(){

    string s,t,px;cin>>s>>t;
    px=s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') a++;
        else if(s[i]=='b') b++;
        else if(s[i]=='c') c++;
    }
    sortv(px);

    if(t=="abc" && (a>0 && b>0 && c>0)){
        string tp="",ans="";
        int b=0;
        for(char c:px){
            if(c=='b') b++;
            else tp+=c;
        }
        int type=0;
        char bef='?';
        for(int i=0;i<tp.size();i++){

            if(tp[i]=='b') continue;

            if(bef!=tp[i]) {
                type++;
            }
            if(type==3){
                while(b){
                    ans+='b';
                    b--;
                }
                type++;
            }
            ans+=tp[i];
            bef=tp[i];
        }
        while(b){
            ans+='b';
            b--;
        }
        cout<<ans<<endl;

    }
    else cout<<px<<endl;


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

