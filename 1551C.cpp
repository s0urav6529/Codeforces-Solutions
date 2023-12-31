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
const int limit=100005;

int solve(string p,char x){

    int f=0,ff=0;

    rep0(i,p.size()){

        if(p[i]==x) f++;
        else ff++;
    }
    return (f-ff);
}

void solution(){

    int n;
    cin>>n;
    vector<string>s(n);
    rep0(i,n) cin>>s[i];

    int ans=0;

    for(char i='a';i<='e';i++){

        vector<int>temp;
        int res=0,ff=0;
        for(int j=0;j<s.size();j++){
            int f=solve(s[j],i);

            if(f<=0) {
                temp.pb(abs(f));
            }
            else res++,ff+=f;
        }

        sortv(temp);

        for(int j=0;j<temp.size();j++){

            if(temp[j]<ff) res++,ff-=temp[j];

        }
        ans=max(ans,res);

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


