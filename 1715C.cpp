

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
const int limit=1e5+5;

ll a[limit];
ll fre[limit];

void run_case(){

    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];

    ll ans=0;

    a[0]=a[n+1]=0;

    for(int i=1;i<=n;i++){

        if(a[i-1]==a[i]) fre[i]=fre[i-1];
        else fre[i]=fre[i-1]+1;
        ans+=fre[i];
    }


    ll temp=ans;
    //cout<<ans<<endl;
    for(int i=1;i<n;i++) {

        temp--;
        if(a[i]!=a[i+1]) temp-=(n-i);
        ans+=temp;
        //cout<<temp<<endl;

    }
    //cout<<ans<<endl;

    while(m--) {
        ll x,i;
        cin>>i>>x;

        if(a[i]==x){
            cout<<ans<<endl;
            continue;
        }

        if(a[i-1]!=a[i] && a[i-1]==x){

            ll dec=(i-1)*(n-i+1);

            ans-=dec;


        }

        if(a[i+1]!=a[i] && a[i+1]==x){

            ll j=i+1;

            ll dec=(j-1) * (n-j+1);

            ans-=dec;

        }


        if(a[i-1]==a[i] && a[i-1]!=x){

            ll inc=(i-1)*(n-i+1);

            ans+=inc;

        }

        if(a[i+1]==a[i] && a[i+1]!=x){

            ll j=i+1;

            ll inc=(j-1) * (n-j+1);

            ans+=inc;
        }

        cout<<ans<<endl;

        a[i]=x;


    }

    return;
}

int main(){
    fast;
    int tc=1;
    //cin>>tc;
    while(tc--) run_case();
    return 0;
}
