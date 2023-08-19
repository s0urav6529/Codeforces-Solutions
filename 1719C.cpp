#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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
typedef long long int ll;
typedef unsigned long long int llu;
typedef long double ld;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

void init_code(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
}

void run_case(){
    int n,k;
    cin>>n>>k;

    vector<int>a(n+1);
    stack<pair<int,int>>st;
    vector<int>left,right;
    for(int i=1;i<=n;i++)cin>>a[i];

    for(int i=1;i<=n;i++){

        if(st.size()==0) left.push_back(0);

        else if(st.size()!=0 && st.top().ff>a[i]) left.push_back(st.top().ss);

        else if(st.size()!=0 && st.top().ff<=a[i]){

            while(st.size()>0&&st.top().ff<=a[i])  st.pop();

            if(st.size()==0) left.push_back(0);

            else if(st.top().ff>a[i]) left.push_back(st.top().ss);
        }
        st.push({a[i],i});
    }

    stack<pair<int,int>>kt;

    for(int i=n;i>=1;i--){

        if(kt.size()==0) right.push_back(n+1);

        else if(kt.size()!=0 && kt.top().ff>a[i]) right.push_back(kt.top().ss);

        else if(kt.size()!=0 && kt.top().ff<=a[i]){

            while(kt.size()>0 && kt.top().ff<=a[i]) kt.pop();

            if(kt.size()==0) right.push_back(n+1);

            else if(kt.top().ff>a[i]) right.push_back(kt.top().ss);
        }
        kt.push({a[i],i});
    }
    rev(right);

    while(k--){

        ll p,r;
        cin>>p>>r;

        ll lp=left[p-1];
        ll rp=right[p-1];
        ll ans=0;
        if(lp==0){

            ll cnt=max(0ll,p-2);
            r-=min(r,cnt);
            ans=p-(cnt+1);
            ans+=((rp-p)-1);

            //cout<<ans<<" "<<r<<endl;

            if(rp==n+1) cout<<r<<endl;
            else cout<<min(r,ans)<<endl;
        }
        else cout<<0<<endl;

    }

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



