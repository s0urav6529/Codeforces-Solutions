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
const int limit=100005;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

}

void run_case(){

    int n,k;
    string s;
    cin>>n>>k>>s;

    if(k>24) {
        for(int i=0;i<n;i++) cout<<'a';
        cout<<endl;
        return;
    }

    char leastlow='z';
    map<pair<char,char>,char>mp;
    while(k){

        int cnt=0;
        for(int i=0;i<n;i++) if(s[i]=='a') cnt++;
        if(cnt==n) break;

        char low,up;
        int i=0;
        while(s[i]=='a'){
            i++;
        }
        int mov=s[i]-'a';
        int mn=min(k,mov);
        low=s[i]-mn;
        k-=mn;
        mov-=mn;
        up=s[i];
        s[i]=low;
        mp[{low,up}]=low;
        i++;

        if(low<leastlow) leastlow=low;

        for(;i<n;i++){


            if(low<leastlow) leastlow=low;

            if(s[i]<leastlow) continue;

            if(mp[{low,up}]) {
                s[i]=mp[{low,up}];
                continue;
            }

            else if(s[i]>up){

                int mov=(s[i]-'a')-(up-'a');



                int mn=min(k,mov);

                char nlow=s[i]-mn;
                if(nlow>low) low=nlow;
                k-=mn;
                mov-=mn;
                up=s[i];
                pppf(s[i],low,up);
                s[i]=low;
                mp[{low,up}]=low;
            }

        }

    }
    cout<<s<<endl;

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


