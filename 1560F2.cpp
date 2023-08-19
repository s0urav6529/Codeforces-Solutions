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
//cin.get();
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
constexpr ll imax=1e9;
constexpr ll imin=-1e9;
constexpr ll MOD=1e9+7;
const int limit=100005;

string solve(int i,int n,int distinct,string ns,int k,string os){
    if(distinct>k) return "";

    if(ns.substr(0,i) < os.substr(0,i)) return "";

    if(i>=n) return ns;

    for(char val='0';val<='9';val++){
        ns[i]=val;

        int found=1;

        for(int j=0;j<i;j++){

            if(ns[j]==val)
                found=0;
        }

        string ans=solve(i+1,n,distinct+found,ns,k,os);

        if(ans.size()) return ans;
    }
    return "";
}


void solution(){

    string s,p;
    int k,n;
    cin>>s>>k;
    for(int i=0;i<s.size();i++) p+='0';
    n=sz(s);

    cout<<solve(0,n,0,p,k,s)<<endl; ///start,end,dist,newstring,k,originalstring
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



