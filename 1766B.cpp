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
const int limit=10000007;


bool vis[limit];
vector<int>prime;
void seive(){

    vis[0]=vis[1]=1;

    prime.pb(2);
    for(int i=4; i<limit; i+=2) vis[i] = 1;

    for(int i=3; i*i<limit; i+=2){

        if(vis[i]) continue;
        prime.pb(i);
        for(int j=i*i; j<limit; j+=2*i) {

            vis[j] = 1;
        }
    }
}


void an1nd1ta(int t){


    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        ll x,y;
        scanf("%lld %lld",&x,&y);

        vector<int>v;

        ll X=y-x;

        //cout<<X<<endl;

        for(int j=0;prime[j]*prime[j]<=X;j++){

            if(vis[X] == 0) break;

            bool ok=false;

            while(X%prime[j]==0){

                X/=prime[j];
                ok=true;
            }

            if(ok) v.pb(prime[j]);
        }
        if(X>1) v.pb(X);

        if(v.size() ==0 ){
            printf("-1\n");
            continue;
        }

        sortv(v);

        ll ans =  1e18;
        int len = v.size();
        for(int j=0;j<len;j++) {

            ll vv = v[j];

            ll d1 = x/vv;

            if(x%vv) d1++;

            ll d2 = y/vv;

            if(y%vv) d2++;


            ll N1 = d1*vv;
            ll N2 = d2*vv;

            N1-=x;
            N2-=y;

            if(N1 > N2) N1 = N2;

            if(ans > N1) ans = N1;
        }

        printf("%lld\n",ans);


    }



    return;
}

int main(){
    fast;
    seive();
    int tc=1;
    //cin >> tc;
    for(int t=1;t<=tc;t++) an1nd1ta(t);
    return 0;
}
