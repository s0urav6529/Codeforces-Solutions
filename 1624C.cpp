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

bool compair(pair<int,int>a,pair<int,int>b){
    if(a.ff==b.ff) return a.ss<b.ss;
    return a.ff>b.ff;
}

void run_case(){

    int n;
    cin>>n;

    int fre[55];
    memset(fre,0,sizeof(fre));
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].ff;
        int x=a[i].ff;
        a[i].ss=1;

        while(x>1){
            if(x<=n) fre[x]++;
            x/=2;
        }
    }

    set<int>s;
    s.insert(1);
    while(1){
        if(s.size()==n){
            pyes;
            return;
        }
        int mn=imax,num=1;
        for(int i=2;i<=n;i++){
            if(fre[i]<mn && (s.find(i)==s.end()) && fre[i]>0){
                mn=fre[i];
                num=i;
            }
        }
        if(mn==imax){
            pno;
            return;
        }

        for(int i=0;i<n;i++){

            bool ok=false;
            if(a[i].ss){

                int x=a[i].ff;
                while(x>1){
                    if(x==num) {
                        s.insert(num);
                        a[i].ss=0;
                        ok=true;
                        break;
                    }
                    x/=2;
                }
                if(ok){
                    int x=a[i].ff;
                    while(x>1){
                        if(x<=n) fre[x]--;
                        x/=2;
                    }

                }
            }
            if(ok) break;
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
    while(tc--) run_case();
    return 0;
}



