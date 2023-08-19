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


void solution(){

    string s,p="";
    int n;
    cin>>n>>s;
    vector<int>cnt(10,0);

    for(int i=0;i<s.size();i++) {
        cnt[s[i]-'0']++;

        if(s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7') p+=s[i];
    }

    //cout<<p<<endl;
    for(int i=1;i<10;i++){
        if((i!=2 && i!=3 && i!=5 && i!=7) && cnt[i]){
            cout<<1<<endl<<i<<endl;
            return;
        }
    }
    for(int i=1;i<10;i++){
        string k="";
        if(cnt[i]>1){
            k+=(i+'0');
            cout<<2<<endl<<k<<k<<endl;
            return;
        }
    }
    if(cnt[2]){

        int tp=-1,fp=-1,sp=-1,tf=0;

        for(int i=0;i<p.size();i++){
            if(p[i]=='2' && tf==0) {
                tp=i;
                tf=1;
            }
            if(p[i]=='5') {
                fp=i;
            }
            if(p[i]=='7') {
                sp=i;
            }
        }
        if(tp>-1 && tp<fp){
            cout<<2<<endl<<25<<endl;
            return;
        }
        if(tp>-1 && tp<sp){
            cout<<2<<endl<<27<<endl;
            return;
        }

    }
    if(cnt[3]){
        int tp=-1,ttp=-1,fp=-1,tf=0;

        for(int i=0;i<p.size();i++){
            if(p[i]=='3' && tf==0) {
                tp=i;
                tf=1;
            }
            if(p[i]=='5') {
                fp=i;
            }
            if(p[i]=='2') {
                ttp=i;
            }
        }
        if(tp>-1 && tp<fp){
            cout<<2<<endl<<35<<endl;
            return;
        }
        if(tp>-1 && tp<ttp){
            cout<<2<<endl<<32<<endl;
            return;
        }

    }
    if(cnt[5]){
        int tp=-1,fp=-1,sp=-1,ff=0;

        for(int i=0;i<p.size();i++){
            if(p[i]=='5' && ff==0) {
                fp=i;
                ff=1;
            }
            if(p[i]=='2') {
                tp=i;
            }
            if(p[i]=='7') {
                sp=i;
            }
        }
        if(fp>-1 && fp<tp){
            cout<<2<<endl<<52<<endl;
            return;
        }
        if(fp>-1 && fp<sp){
            cout<<2<<endl<<57<<endl;
            return;
        }
    }
    if(cnt[7]){
        int tp=-1,fp=-1,sp=-1,sf=0;

        for(int i=0;i<p.size();i++){

            if(p[i]=='7' && sf==0) {
                sp=i;
                sf=1;
            }
            if(p[i]=='2') {
                tp=i;
            }
            if(p[i]=='5') {
                fp=i;
            }
        }
        if(sp>-1 && sp<fp){
            cout<<2<<endl<<75<<endl;
            return;
        }
        if(sp>-1 && sp<tp){
            cout<<2<<endl<<72<<endl;
            return;
        }
    }
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


