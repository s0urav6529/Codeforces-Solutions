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
const int limit=2e5+5;

ll a[limit] , psum[limit],Xor[limit];
ll n;

tuple<bool , ll , ll>check(ll mid){


    for(int i=1;i<=(n-mid+1);i++){

        ll xval = Xor[i+mid-1]^Xor[i-1];
        ll pval = psum[i+mid-1]-psum[i-1];

        if(psum[n]-Xor[n] == (pval- xval)){
            return{true , i , i+mid-1};
        }


    }

    return {false,-1,-1};



}

void run_case(){

    ll q;
    cin >> n >> q;

    ll l=1,r=n,L,R,ans=n;

    psum[0] = Xor[0] = 0;

    for(int i=1;i<=n;i++){
        cin >> a[i];
        psum[i] = a[i]+psum[i-1];
        Xor[i]  = a[i]^Xor[i-1];
    }
    cin >> L >> R;


    while(l<=r){

        ll mid = l+(r-l)/2;

        auto[ok,x,y] = check(mid);

        if(ok){
            if(mid<ans){
                L=x;
                R=y;
                ans = mid;
            }
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<L <<" "<<R <<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

