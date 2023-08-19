#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define uniq(vec)    vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl
#define pf(a)        cout<<a<<endl
#define p2f(a,b)     cout<<a<<" "<<b<<endl
#define p3f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<endl
#define p4f(a,b,c)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
//cin.get();
typedef long long int ll;
//typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=1000000007;
const int limit=1e5+5;

void run_case(){

    ll l,r,x,a,b;
    cin >> l >> r >> x >> a >> b;

    if(a>b) swap(a,b);

    if(abs(a-b) == 0){
        cout<<0<<endl;
        return;
    }
    if(abs(a-b)>=x){
        cout<<1<<endl;
        return;
    }
    bool ok=true;
    ll ls = a-x;

    if(ls<l) ok=false;
    else ls = l;

    if(ok && (abs(b-ls)>=x)){
        cout<<2<<endl;
        return;
    }
    ok=true;

    ll rs = x+a;

    if(rs>r) ok=false;
    else rs=r;

    if(ok && (abs(rs-b)>=x)){
        cout<<2<<endl;
        return;
    }

    ok=true;

    rs = x+a;

    if(rs>r) ok=false;
    else rs=r;

    if(ok && abs(rs-l)>=x && abs(b-l)>=x){
        cout<<3<<endl;
        return;
    }

    cout<<-1<<endl;
    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

