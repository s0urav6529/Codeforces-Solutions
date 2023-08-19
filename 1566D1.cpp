
///GOD is Allmighty.
///Hore Krisna,Lord Krisna.

#include<bits/stdc++.h>
#include<math.h>
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
#define reset(a,b) memset(a, (b), sizeof(a))
#define fr1(p,i,k,z) for (ll i=p ; i<=k ; i+=z)
#define rf1(p,i,k,z) for (ll i=p ; i>=k ; i-=z)
#define fr0(p,i,k,z) for (ll i=p ; i<k ; i+=z)
#define rf0(p,i,k,z) for (ll i=p-1 ; i>=k ; i-=z)
#define min3(a,b,c) min(a, min(b,c))
#define min4(a,b,c,d) min(a, min(b,min(c,d)))
#define max3(a,b,c) max(a, max(b,c))
#define max4(a,b,c,d) max(a, max(b,max(c,d)))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a/gcd(a,b))*b)
#define pfl(a) cout<<(a)<<endl
#define pf2(a,b) cout <<(a)<<" "<<(b)<<endl
#define pf3(a,b,c) cout <<(a)<<" "<<(b)<<" "<<(c)<<endl
#define pf4(a,b,c,d) cout <<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
#define pyes  cout<<"YES"<<endl
#define pno   cout<<"NO"<<endl
#define nline   cout<<"\n"
#define in(a) cin >>(a)
#define in2(a,b) cin >> (a) >> (b)
#define in3(a,b,c) cin >> (a) >> (b) >> (c)
#define in4(a,b,c,d) cin >> (a) >> (b) >> (c) >> (d)
#define in5(a,b,c,d,e) cin >> (a) >> (b) >> (c) >> (d) >>(e)
#define in6(a,b,c,d,e,f) cin >> (a) >> (b) >> (c) >> (d) >>(e) >>(f)
#define gline(z,s) getline(cin,s)
#define sz(x) int((x).size())
#define sortv(k)     sort(k.begin(),k.end())
#define rev(k)       reverse(k.begin(),k.end())
#define all(k)       k.begin(), k.end()
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll lmax = 1e18;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;
constexpr ld eps = 1e-9;
///heap
//priority_queue<int>pmax;
//priority_queue<int,vector<int>,greater<int>>pmin;
//cin.get(); skip newline at string
///*************************Keep Coding***********************************


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
void solution()
{
    int n,k;
    ll ans=0;
    cin>>n>>k;
    ordered_set s;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        Insert(s,x);
        ans+=FirstIdx(s,x);;
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    //read;//out;
    int tc=1;
    in(tc);
    while(tc--) solution();
    return 0;
}
 
