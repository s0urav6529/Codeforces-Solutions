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
#define pyes         cout<<"Yes"<<endl
#define pno          cout<<"No"<<endl
#define pfp(x,y)      cout<<fixed<<setprecision(y)<<x
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
//cin.get();
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=400010;


int pref[limit];
void solution(){


    int n,k;
    cin>>n>>k;

    for(int i=1;i<=2*k+10;i++) pref[i]=0;
    vector<int>v(n);
    rep0(i,n) cin>>v[i];

    map<int,int>mp;
    rep0(i,n/2){

        int l=v[i];
        int r=v[n-i-1];
        //cout<<l<<" "<<r<<endl;
        mp[l+r]++;

        int mn=min(l,r);
        int mx=max(l,r);

        mn+=1;
        mx+=k;
        pref[mn]++;
        pref[mx+1]--;
    }
    int sum=0;
    for(int i=1;i<=2*k;i++){

        sum+=pref[i];
        pref[i]=sum;
    }

    int ans=n;
    for(int i=2;i<=2*k;i++){

        int chg0=mp[i];
        int chg1=pref[i]-chg0;

        int chg2=(n/2-chg0-chg1)*2;

        //cout<<chg0<<" "<<chg1<<" "<<chg2<<endl;

        ans=min(ans,chg1+chg2);

    }
    cout<<ans<<endl;



    return;
}
int main()
{
    fast;
    //read;
    //out;
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}


