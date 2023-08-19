
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

    int n;
    cin >> n;
    ll a[n+5],zero[n+5],one[n+5];
    zero[0]=0;
    one[0]=0;

    for(int i=1;i<=n;i++) {
        cin >> a[i];
        if(a[i]==0) zero[i]=zero[i-1]+1;
        else zero[i]=zero[i-1];
        if(a[i]==1) one[i]=one[i-1]+1;
        else one[i]=one[i-1];
    }

    ll ans[n+5];
    ans[0]=0;
    ans[n+1]=0;

    ll res=0;

    for(int i=1;i<=n;i++){
        if(a[i]==1){
            ans[i]=zero[n]-zero[i];
        }
        else ans[i]=0;

        res+=ans[i];

    }
    ll cans[n+5];
    cans[n+1]=0;
    cans[0]=0;

    for(int i=n;i>=1;i--){
        cans[i]=ans[i]+cans[i+1];
    }


    ll ini = res;
    for(int i=1;i<=n;i++){
        ll temp=0;
        if(a[i]==0){
            temp = (ini - one[i]);
            temp += (zero[n]-zero[i]);
        }
        else{
            temp= (ini-ans[i]);
            temp+=one[i-1];
        }
        res=max(res,temp);
    }
    cout<<res<<endl;

    return;
}

int main(){
    fast;
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

