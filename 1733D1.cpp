#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define setprecision(y,x)     cout<<fixed<<setprecision(y)<<x<<endl   ///kotoghor , value
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
typedef long double ld;
typedef unsigned long long int llu;
//constexpr llu Mx=18446744073709551615;
constexpr ll MOD=998244353;
const int limit=2e5+5;

void run_case(){

    int n , x, y;
    string a,b;
    cin >> n >> x >> y >>a  >> b;

    vector<int>c;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) c.push_back(i);
    }
    if(c.size()&1) cout<<-1<<endl;
    else if(c.size()==0) cout<<0<<endl;
    else{

        ll sc=c.size();
        bool ok=true;

        for(int i=1;i<sc;i++) if(c[i-1]+1==c[i]) ok=false;

        if(ok || (sc>2)){
            cout<<(sc/2)*y<<endl;
        }
        else{
            if(y*2<x) cout<<2*y<<endl;
            else cout<<x<<endl;
        }

    }

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

