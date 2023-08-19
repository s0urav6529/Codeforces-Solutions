#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
#define rep(i,k)  for (int i=1 ; i<=k ; i++)
#define reset(a,b)   memset(a, (b), sizeof(a))
#define sortv(k)     sort(k.begin(),k.end())
#define sortg(k)     sort(k.begin(),k.end(),greater<int>())
#define rev(k)       reverse(k.begin(),k.end())
#define umin(a,b)    a=min(a,b)
#define umax(a,b)    a=max(a,b)
#define min3(a,b,c)  min(a, min(b,c))
#define pyes         cout<<"YES"<<endl
#define pno          cout<<"NO"<<endl;
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;
const int limit=3000001;


int vis[limit];
int fre[limit];
vector<int>prime;

void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i]= i/2;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            if(vis[j]==0) vis[j] = j/i;
        }
    }
    prime.pb(1);
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
    if(vis[j]==0)
        prime.pb(j);
}
void solution(){

    int n;
    cin>>n;
    vector<int>a(2*n);
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        fre[a[i]]++;
    }

    sortv(a);
    rev(a);

    for(int i=0;i<2*n;i++){

        if(vis[a[i]] && fre[a[i]] && fre[vis[a[i]]]){  ///not prime output
            cout<<a[i]<<" ";
            fre[a[i]]--;
            fre[vis[a[i]]]--;
        }
    }

    vector<int>p;
    for(int i=0;i<2*n;i++){   ///putting prime number in another array
        if(fre[a[i]]){
            p.pb(a[i]);
            fre[a[i]]--;
        }
    }
    sortv(p);
    for(int i=0;i<p.size();i++){  ///restore their frequency
        fre[p[i]]++;
    }

    for(int i=0;i<p.size();i++){   ///prime output

        if(fre[p[i]]){
            cout<<p[i]<<" ";
            fre[prime[p[i]]]--;
            fre[p[i]]--;
        }
    }
    cout<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    seive();
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}


