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
constexpr ll MOD=998244353;
const int limit=1e6+5;

bool vis[limit];
vector<int>prime;
void seive(){

    vis[0]=vis[1]=1;

    for(int i=4; i<limit; i+=2) vis[i] = 1;

    for(int i=3; i*i<limit; i+=2){

        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i) {

            vis[j] = 1;
        }
    }

    prime.pb(2);

    for(int j=3; j<limit; j+=2){
    	if(vis[j]==0) prime.pb(j);
    }
}


void run_case(){
    ll a,b,c,d;
    cin >> a >> b  >> c >> d;

    ll number =a*b;

    vector<pair<int,int>>factors;

    for(int i=0;prime[i]*prime[i]<=number;i++){

        bool ok=false;
        int cnt=0;
        while(number%prime[i]==0){
            number/=prime[i];
            ok=true;
            cnt++;
        }
        if(ok){
            factors.pb({prime[i],cnt});
        }
    }
    if(number>1) factors.pb({number,1});


    for(int x=a+1;x<=c;x++){

        map<int,int>mp;
        int N=x;
        for(int i=0;prime[i]*prime[i]<=N;i++){

            bool ok=false;
            int cnt=0;
            while(N%prime[i]==0){
                N/=prime[i];
                ok=true;
                cnt++;
            }
            if(ok){
                mp[prime[i]]=cnt;
            }

        }
        if(N>1) mp[N]=1;

        ll num = 1;

        for(int i=0;i<factors.size();i++){

            N = factors[i].first;

            int ache = factors[i].second;

            if(mp.find(N)==mp.end()){

                for(int j=1;j<=ache;j++) num*=N;

            }
            else {
                int rest = 0 ;

                if(mp[N]<ache) rest=ache-mp[N];

                for(int j=1;j<=rest;j++) num*=N;

            }
        }
        ll range = b+1;

        if(num>=range && num<=d){
            cout<< x <<" "<<num <<endl;
            return;
        }
        else if(num>d);
        else{
            ll div = range / num;
            ll num1= div*num;
            if(num1 >= range && num1<=d) {
                cout<<x <<" "<<num1 <<endl;
                return;
            }
            num1= (div+1)*num;
            if(num1 >= range && num1<=d) {
                cout<<x <<" "<<num1 <<endl;
                return;
            }
        }
    }

    cout << -1 << " " <<-1<<endl;


}

int main(){
    fast;
    seive();
    int tc=1;
    cin>>tc;
    while(tc--) run_case();
    return 0;
}

