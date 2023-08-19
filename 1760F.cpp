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

    ll n,c,d;
    cin >> n >> c >>d;
    vector<ll>a(n);

    ll sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    if(sum*d < c){
        cout<<"Impossible"<<endl;
        return;
    }
    sortv(a);
    rev(a);
    sum=0;
    for(int i=0;i<n;i++){

        sum+=a[i];

        if(sum>=c && (i+1)<=d){
            cout<<"Infinity"<<endl;
            return;
        }
    }
    ll l=0,r=1000000000000000000,ans=-1;

    while(l<=r){

        ll mid=l+(r-l)/2;

        ll k =mid+1;

        ll mul = d/k;

        ll extra = d-(k*mul);

        ll sum = 0 , day = d;
        bool ok=true;
        for(int i=0;i<n;i++){


            day-=mul;

            if(day<0) ok=false;

            sum += (mul*a[i]);

            if(extra>0){
                day--;
                if(day<0) ok=false;
                sum+=a[i]; extra--;
            }


            if(sum>=c) break;

        }

        if(ok && sum>=c){
            ans = max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;

    }
    if(ans>=0) cout<<ans<<endl;
    else cout<<"Impossible"<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

