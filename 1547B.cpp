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
#define pno          cout<<"NO"<<endl
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
const int limit=1000001;

void solution(){
    string s;
    cin>>s;
    char c='a';
    int in=-1;
    vector<int>cnt(28);
    for(int i=0;i<s.size();i++) {
        cnt[s[i]-c]++;
        if(cnt[s[i]-c]>1) {
            pno;
            return;
        }
        if(s[i]==c) in=i;
    }
    if(in==-1) {
        pno;
        return;
    }
    c++;
    //cout<<in<<" "<<c<<endl;
    int lft=in-1,rth=in+1;
    while(lft>-1 || rth<s.size()){
        if(c==s[lft] && lft>-1) lft--;
        else if(c==s[rth] && rth<s.size()) rth++;
        else {
            pno;
            return;
        }
        //cout<<"ok"<<endl;
        c++;
    }
    pyes;

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


