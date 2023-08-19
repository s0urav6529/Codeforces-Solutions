#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen ("in.txt","r",stdin);
#define out freopen ("out.txt","w",stdout);
#define sz(x) int((x).size())
#define rep0(i,k) for (int i=0 ; i<k ; i++)
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
#define limit 100005
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
constexpr ll imax = 1e9;
constexpr ll imin =-1e9;
constexpr ll mod = 1e9+7;

int a[150001],b[150001];
unordered_map<int,int>mp;

void addprimes(int val){

    for(int i=2;i*i<=val;i++){

        if(val%i==0){

            while(val%i==0){
                val/=i;
            }

            if(mp[i]==0) mp[i]++;
        }

    }
    if(val>1 && mp[val]==0) mp[val]++;
}
void solution()
{
    int n;
    cin>>n;
    rep(i,n) cin>>a[i]>>b[i];

    addprimes(a[1]);
    addprimes(b[1]);

    for(auto i:mp){

        bool f=1;
        for(int j=2;j<=n;j++){

            if(a[j]%i.ff==0 || b[j]%i.ff==0) continue;
            else {
                f=0;
                break;
            }
        }

        if(f){

            cout<<i.ff;
            return;
        }
    }
    cout<<-1;
    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    //cin>>tc;
    while(tc--) solution();
    return 0;
}







