#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;

namespace __gnu_pbds{
          typedef tree<int,
                       null_type,
                       less_equal<int>,
                       rb_tree_tag,
                       tree_order_statistics_node_update> ordered_set;
}
using namespace __gnu_pbds;

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

void Insert(ordered_set &s,int x){ //this function inserts one more occurrence of (x) into the set.

     s.insert(x);

}
bool Exist(ordered_set &s,int x){ //this function checks weather the value (x) exists in the set or not.

     if((s.upper_bound(x))==s.end()){
        return 0;
     }
     return ((*s.upper_bound(x))==x);

}


void Erase(ordered_set &s,int x){ //this function erases one occurrence of the value (x).

     if(Exist(s,x)){
        s.erase(s.upper_bound(x));
     }

}


int FirstIdx(ordered_set &s,int x){ //this function returns the first index of the value (x)..(0 indexing).

    if(!Exist(s,x)){
        return -1;
    }
    return (s.order_of_key(x));

}


int Value(ordered_set &s,int idx){ //this function returns the value at the index (idx)..(0 indexing).

   return (*s.find_by_order(idx));

}


int LastIdx(ordered_set &s,int x){ //this function returns the last index of the value (x)..(0 indexing).

    if(!Exist(s,x)){
        return -1;
    }
    if(Value(s,(int)s.size()-1)==x){
        return (int)(s.size())-1;
    }
    return FirstIdx(s,*s.lower_bound(x))-1;

}


int Count(ordered_set &s,int x){ //this function returns the number of occurrences of the value (x).

     if(!Exist(s,x)){
        return 0;
     }
     return LastIdx(s,x)-FirstIdx(s,x)+1;

}


void Clear(ordered_set &s){ //this function clears all the elements from the set.

     s.clear();

}


int Size(ordered_set &s){ //this function returns the size of the set.

     return (int)(s.size());

}

void run_case(){
    int n,q;
    cin>>n>>q;
    map<int,int>xx,yy;
    ordered_set xs,ys;
    while(q--){

        int t;
        cin>>t;
        if(t==1){
            int x,y; cin>>x>>y;
            if(++xx[x]==1) Insert(xs,x);
            if(++yy[y]==1) Insert(ys,y);

        }
        else if(t==2){
            int x,y; cin>>x>>y;
            if(--xx[x]==0) Erase(xs,x);
            if(--yy[y]==0) Erase(ys,y);
        }
        else {
            int x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;

            int no_of_x=abs(x1-x2)+1;
            int no_of_y=abs(y1-y2)+1;

            int upper_x=FirstIdx(xs,x1);
            int lower_x=FirstIdx(xs,x2);
            int upper_y=FirstIdx(ys,y1);
            int lower_y=FirstIdx(ys,y2);
//            ppf(upper_x,lower_x);
//            ppf(upper_y,lower_y);

            if(upper_x!=-1 &&  lower_x!=-1 && no_of_x==abs(upper_x-lower_x)+1) pyes;
            else if(upper_y!=-1 &&  lower_y!=-1 && no_of_y==abs(upper_y-lower_y)+1) pyes;
            else pno;

        }
    }
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

