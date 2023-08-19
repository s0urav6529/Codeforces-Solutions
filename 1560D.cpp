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
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mpr make_pair
#define pi acos(-1.0)
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=200001;

vector<ll>power;

string m_string(ll num){

    string s;
    while(num){

        int x=num%10;
        s+=(x+'0');
        num/=10;
    }
    rev(s);
    return s;
}

void solution(){

    int n,m=0,ans=200;
    cin>>n;
    string p=m_string(n);
    for(int i=0;i<59;i++){
        ll num=power[i];
        string s=m_string(num);

        int in=0;
        while(in<=p.size()){
            int k=0,match=0;

            for(int j=in;j<sz(p)&&k<sz(s);j++){
                if(p[j]==s[k]) k++,match++;
            }
            in++;
            //cout<<match<<endl;

            int del=p.size()-match;
            int add=s.size()-match;

            ans=min(ans,del+add);
        }

    }
    cout<<ans<<endl;
    return;
}
int main()
{
    fast;
    //read;
    //out;

    for(int i=0;i<=59;i++){

        power.pb(1ll<<i);
    }
    int tc=1;
    cin>>tc;
    while(tc--) solution();
    return 0;
}


