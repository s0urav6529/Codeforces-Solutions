
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


    ll n; cin >> n;

    vector<int>a(n+1);
    for(int i=1;i<=n;i++) a[i]=i;

    if(n&1){

        for(int i=1;i<=n-5;i+=2){
            swap(a[i],a[i+1]);
        }

    }
    else{
        for(int i=1;i<=n-2;i+=2){
            swap(a[i],a[i+1]);
        }
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;



    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}