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
constexpr ll MOD=998244353;
const int limit=200005;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}


void run_case(){

    int x,prev,a[10];

    map<int,int>num,cnt;

    num[4]=1,num[8]=1,num[15]=1,num[16]=1,num[23]=1,num[42]=1;

    bool ok=false;
    for(int i=1;i<=2;i++){

        cout<<"? "<<i<<" "<<i+1<<endl;
        cout.flush();
        cin>>x;

        for(auto j:num){

            if(x%j.ff==0 && num[x/j.ff]){
                //cout<<j.ff<<endl;
                cnt[j.ff]++;
                cnt[x/j.ff]++;

                if(cnt[j.ff]==2) a[2]=j.ff,ok=true;
                else if(cnt[x/j.ff]==2) a[2]=x/j.ff,ok=true;
                break;
            }

        }
        if(ok) a[1]=prev/a[2],a[3]=x/a[2];
        prev=x;

    }
    ok=false;

    for(int i=4;i<=5;i++){

        cout<<"? "<<i<<" "<<i+1<<endl;
        cout.flush();
        cin>>x;

        for(auto j:num){


            if(x%j.ff==0 && num[x/j.ff]){
                //cout<<j.ff<<endl;
                cnt[j.ff]++;
                cnt[x/j.ff]++;

                if(cnt[j.ff]==2) a[5]=j.ff,ok=true;
                else if(cnt[x/j.ff]==2) a[5]=x/j.ff,ok=true;
                break;
            }

        }
        if(ok) a[4]=prev/a[5],a[6]=x/a[5];
        prev=x;
    }

    cout<<"! ";
    for(int i=1;i<=6;i++) cout<<a[i]<<" ";
    cout<<endl;

    return;
}

int main(){
    fast;
    //init_code();
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}




