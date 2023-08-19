
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
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
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

    int n;
    string s;
    cin >> n >> s;


    vector<ll>zero,one;
    int len = 0;
    char prev='X';

    ll o=0,z=0;
    for(int i=0;i<n;i++){
        char c=s[i];
        if(c!=prev){

            if(len){
                if(prev=='0') zero.pb(len);
                else one.pb(len);
            }
            len = 1;
            prev=c;

        }
        else len++,prev=c;

        if(s[i]=='1') o++;
        else z++;

    }

    if(len){

        if(prev=='0') zero.pb(len);
        else one.pb(len);
    }

    ll ans = o*z;

    for(int i=0;i<one.size();i++){
        ll x=one[i];
        x*=x;
        ans = max(ans ,x);
    }

    for(int i=0;i<zero.size();i++){
        ll x=zero[i];
        x*=x;
        ans = max(ans ,x);
    }
    cout<<ans<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}
